import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from gmk_chunk_inventory import inventory


class GmkInventoryTests(unittest.TestCase):
    def test_all_samples_have_reproducible_named_resources(self):
        samples = sorted((ROOT / 'app/src/main/assets/www/samples').glob('*.gmk'))
        self.assertEqual([p.name for p in samples], ['mario_bros.gmk', 'plataformas.gmk', 'shooter.gmk', 'zelda.gmk'])
        for path in samples:
            chunks = inventory(path.read_bytes())
            named = [c for c in chunks if c['kind'] == 'named_v1_resource']
            self.assertGreaterEqual(len(chunks), 10, path.name)
            self.assertGreaterEqual(len(named), 10, path.name)
            offsets = [c['offset'] for c in chunks]
            self.assertEqual(offsets, sorted(set(offsets)), path.name)
            self.assertTrue(all(c['compressed_size'] > 2 and c['decompressed_size'] > 0 for c in chunks), path.name)
            self.assertGreaterEqual(sum(c.get('semantic_type') == 'object' for c in chunks), 1, path.name)
            self.assertGreaterEqual(sum(c.get('semantic_type') == 'room' for c in chunks), 1, path.name)
            self.assertGreaterEqual(sum(c.get('semantic_type') == 'sprite' for c in chunks), 1, path.name)

    def test_named_resource_names_are_ascii(self):
        sample = ROOT / 'app/src/main/assets/www/samples/mario_bros.gmk'
        for chunk in inventory(sample.read_bytes()):
            if chunk['kind'] == 'named_v1_resource':
                self.assertTrue(chunk['name'].isascii())
                self.assertGreaterEqual(len(chunk['name']), 1)


if __name__ == '__main__':
    unittest.main()
