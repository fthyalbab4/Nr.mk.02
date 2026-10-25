import importlib.util
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
MODULE_PATH = ROOT / "tools/import_fnames_catalog.py"
spec = importlib.util.spec_from_file_location("import_fnames_catalog", MODULE_PATH)
module = importlib.util.module_from_spec(spec)
assert spec and spec.loader
spec.loader.exec_module(module)


class CatalogImportTests(unittest.TestCase):
    def test_kinds_arity_markers_and_unverified_default(self):
        source = """// catalog header
pi#
argument_relative*
point_distance(x1,y1,x2,y2)
choose(x1,x2,...)
"""
        entries, warnings = module.parse_fnames(source, "sample.fnames")
        self.assertEqual(warnings, [])
        self.assertEqual([e["kind"] for e in entries], ["constant", "variable", "function", "function"])
        self.assertEqual(entries[0]["status"], "unverified")
        self.assertTrue(entries[1]["readonly"])
        self.assertEqual(entries[2]["fixed_arity"], 4)
        self.assertTrue(entries[3]["variadic"])
        self.assertTrue(all(e["status"] == "unverified" for e in entries))

    def test_semicolon_and_reviewed_evidence(self):
        entries, warnings = module.parse_fnames(
            "highscore_set_font(name,size,style);\n",
            "sample.fnames",
            {"highscore_set_font": {"status": "stub", "evidence": ["contract-test"]}},
        )
        self.assertEqual(warnings, [])
        self.assertEqual(entries[0]["status"], "stub")
        self.assertEqual(entries[0]["evidence"], ["contract-test"])

    def test_invalid_status_rejected(self):
        with self.assertRaises(ValueError):
            module.parse_fnames("foo(x)\n", "sample.fnames", {"foo": "parity"})


if __name__ == "__main__":
    unittest.main()
