// rea decompile_all
// name: FUN_00422f70
// address: 0x422f70
// body: available
// range: 0x422f70-0x423167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422f70(void)

{
  HMODULE pHVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;

  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  puVar14 = &stack0xfffffffc;
  puVar15 = &stack0xfffffffc;
  puVar16 = &stack0xfffffffc;
  puVar17 = &stack0xfffffffc;
  puVar18 = &stack0xfffffffc;
  puVar19 = &stack0xfffffffc;
  puVar20 = &stack0xfffffffc;
  puVar21 = &stack0xfffffffc;
  puVar22 = &stack0xfffffffc;
  pHVar1 = GetModuleHandleW(L"oleaut32.dll");
  DAT_00787eb8 = FUN_00422f44("VariantChangeTypeEx",&LAB_00422adc);
  _DAT_00787ebc = FUN_00422f44("VarNeg",&LAB_00422b0c,puVar2,&stack0xfffffffc,pHVar1);
  _DAT_00787ec0 = FUN_00422f44("VarNot",&LAB_00422b0c,puVar3);
  _DAT_00787ec4 = FUN_00422f44("VarAdd",FUN_00422b18,puVar4);
  _DAT_00787ec8 = FUN_00422f44("VarSub",FUN_00422b18,puVar5);
  _DAT_00787ecc = FUN_00422f44("VarMul",FUN_00422b18,puVar6);
  _DAT_00787ed0 = FUN_00422f44("VarDiv",FUN_00422b18,puVar7);
  _DAT_00787ed4 = FUN_00422f44("VarIdiv",FUN_00422b18,puVar8);
  _DAT_00787ed8 = FUN_00422f44("VarMod",FUN_00422b18,puVar9);
  _DAT_00787edc = FUN_00422f44("VarAnd",FUN_00422b18,puVar10);
  _DAT_00787ee0 = FUN_00422f44("VarOr",FUN_00422b18,puVar11);
  _DAT_00787ee4 = FUN_00422f44("VarXor",FUN_00422b18,puVar12);
  _DAT_00787ee8 = FUN_00422f44("VarCmp",FUN_00422b24,puVar13);
  DAT_00787eec = FUN_00422f44("VarI4FromStr",FUN_00422b30,puVar14);
  _DAT_00787ef0 = FUN_00422f44("VarR4FromStr",&LAB_00422b9c,puVar15);
  DAT_00787ef4 = FUN_00422f44("VarR8FromStr",&LAB_00422c08,puVar16);
  DAT_00787ef8 = FUN_00422f44("VarDateFromStr",&LAB_00422c74,puVar17);
  DAT_00787efc = FUN_00422f44("VarCyFromStr",&LAB_00422ce0,puVar18);
  DAT_00787f00 = FUN_00422f44("VarBoolFromStr",&LAB_00422d4c,puVar19);
  DAT_00787f04 = FUN_00422f44("VarBstrFromCy",&LAB_00422dcc,puVar20);
  DAT_00787f08 = FUN_00422f44("VarBstrFromDate",&LAB_00422e3c,puVar21);
  DAT_00787f0c = FUN_00422f44("VarBstrFromBool",&LAB_00422eb0,puVar22,&stack0xfffffffc);
  return;
}
