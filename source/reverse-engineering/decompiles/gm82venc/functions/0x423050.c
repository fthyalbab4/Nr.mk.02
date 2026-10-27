// rea decompile_all
// name: FUN_00423050
// address: 0x423050
// body: available
// range: 0x423050-0x423247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423050(void)

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
  DAT_0068eeb8 = FUN_00423024("VariantChangeTypeEx",&LAB_00422bbc);
  _DAT_0068eebc = FUN_00423024("VarNeg",&LAB_00422bec,puVar2,&stack0xfffffffc,pHVar1);
  _DAT_0068eec0 = FUN_00423024("VarNot",&LAB_00422bec,puVar3);
  _DAT_0068eec4 = FUN_00423024("VarAdd",FUN_00422bf8,puVar4);
  _DAT_0068eec8 = FUN_00423024("VarSub",FUN_00422bf8,puVar5);
  _DAT_0068eecc = FUN_00423024("VarMul",FUN_00422bf8,puVar6);
  _DAT_0068eed0 = FUN_00423024("VarDiv",FUN_00422bf8,puVar7);
  _DAT_0068eed4 = FUN_00423024("VarIdiv",FUN_00422bf8,puVar8);
  _DAT_0068eed8 = FUN_00423024("VarMod",FUN_00422bf8,puVar9);
  _DAT_0068eedc = FUN_00423024("VarAnd",FUN_00422bf8,puVar10);
  _DAT_0068eee0 = FUN_00423024("VarOr",FUN_00422bf8,puVar11);
  _DAT_0068eee4 = FUN_00423024("VarXor",FUN_00422bf8,puVar12);
  _DAT_0068eee8 = FUN_00423024("VarCmp",FUN_00422c04,puVar13);
  DAT_0068eeec = FUN_00423024("VarI4FromStr",FUN_00422c10,puVar14);
  _DAT_0068eef0 = FUN_00423024("VarR4FromStr",&LAB_00422c7c,puVar15);
  DAT_0068eef4 = FUN_00423024("VarR8FromStr",&LAB_00422ce8,puVar16);
  DAT_0068eef8 = FUN_00423024("VarDateFromStr",&LAB_00422d54,puVar17);
  DAT_0068eefc = FUN_00423024("VarCyFromStr",&LAB_00422dc0,puVar18);
  DAT_0068ef00 = FUN_00423024("VarBoolFromStr",&LAB_00422e2c,puVar19);
  DAT_0068ef04 = FUN_00423024("VarBstrFromCy",&LAB_00422eac,puVar20);
  DAT_0068ef08 = FUN_00423024("VarBstrFromDate",&LAB_00422f1c,puVar21);
  DAT_0068ef0c = FUN_00423024("VarBstrFromBool",&LAB_00422f90,puVar22,&stack0xfffffffc);
  return;
}
