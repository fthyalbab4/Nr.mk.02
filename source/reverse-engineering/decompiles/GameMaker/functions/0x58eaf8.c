// rea decompile_all
// name: FUN_0058eaf8
// address: 0x58eaf8
// body: available
// range: 0x58eaf8-0x58ecf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058eaf8(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  fVar1 = 2.0 - *(float *)(param_1 + 0x114) * 2.0;
  fVar2 = 2.0 - *(float *)(param_1 + 0x11c) * 2.0;
  FUN_00409be0(param_1 + 0x124,&DAT_005888bc,1,0x100,fVar1,
               (*(float *)(param_1 + 0x114) * fVar1) / *(float *)(param_1 + 0x118),fVar2,
               (*(float *)(param_1 + 0x11c) * fVar2) / *(float *)(param_1 + 0x118));
  FUN_00409be0(param_1 + 0x128,&DAT_005888bc,1,0x100);
  FUN_00409be0(param_1 + 300,&DAT_005888bc,1,0x100);
  FUN_00409be0(param_1 + 0x130,&DAT_005888bc,1,0x100);
  if (*(char *)(param_1 + 0x134) == '\v') {
    iVar5 = 0;
    do {
      uVar3 = FUN_00404878();
      *(undefined4 *)(*(int *)(param_1 + 0x124) + iVar5 * 4) = uVar3;
      uVar3 = FUN_00404878();
      *(undefined4 *)(*(int *)(param_1 + 0x128) + iVar5 * 4) = uVar3;
      iVar4 = FUN_00404878();
      *(int *)(*(int *)(param_1 + 300) + iVar5 * 4) = -iVar4;
      iVar4 = FUN_00404878();
      *(int *)(*(int *)(param_1 + 0x130) + iVar5 * 4) = -iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x100);
  }
  else {
    iVar5 = 0;
    do {
      uVar3 = FUN_00404878();
      *(undefined4 *)(*(int *)(param_1 + 0x124) + iVar5 * 4) = uVar3;
      uVar3 = FUN_00404878();
      *(undefined4 *)(*(int *)(param_1 + 0x128) + iVar5 * 4) = uVar3;
      iVar4 = FUN_00404878();
      *(int *)(*(int *)(param_1 + 300) + iVar5 * 4) = -iVar4;
      iVar4 = FUN_00404878();
      *(int *)(*(int *)(param_1 + 0x130) + iVar5 * 4) = -iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x100);
  }
  return;
}
