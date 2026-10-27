// rea decompile_all
// name: FUN_00533734
// address: 0x533734
// body: available
// range: 0x533734-0x53385c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00533734(undefined4 param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_0052f12c(param_1,800);
  uVar2 = FUN_00405a4c(&LAB_0052e8fc,1);
  FUN_0052f12c(uVar2,*(undefined4 *)(*(int *)(*(int *)PTR_DAT_007828b0 + 0x388) + 0x6c));
  FUN_0052f240(uVar2,DAT_0077b578);
  FUN_0052f168(uVar2,PTR_u_Game_Information_0077b57c);
  FUN_0052f12c(uVar2,DAT_0077b580);
  FUN_0052f12c(uVar2,DAT_0077b584);
  FUN_0052f12c(uVar2,DAT_0077b588);
  FUN_0052f12c(uVar2,DAT_0077b58c);
  FUN_0052f240(uVar2,DAT_0077b590);
  FUN_0052f240(uVar2,DAT_0077b594);
  FUN_0052f240(uVar2,DAT_0077b598);
  FUN_0052f240(uVar2,DAT_0077b59c);
  if (param_2 == '\0') {
    FUN_0052f140(uVar2);
  }
  uVar3 = FUN_00405a4c(&LAB_00433630,1);
  piVar1 = *(int **)(*(int *)(*(int *)PTR_DAT_007828b0 + 0x388) + 0x2c0);
  (**(code **)(*piVar1 + 0x84))(piVar1,uVar3);
  FUN_0052f298(uVar2,uVar3);
  FUN_00405a7c(uVar3);
  FUN_0052f34c(param_1,uVar2);
  FUN_00405a7c(uVar2);
  return 1;
}
