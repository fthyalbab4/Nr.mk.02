// rea decompile_all
// name: FUN_0056f3f0
// address: 0x56f3f0
// body: available
// range: 0x56f3f0-0x56f442 inclusive
// range: 0x56f463-0x56f58f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f3f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1c [12];
  undefined4 local_10;
  int local_c;
  int local_8;

  iVar4 = *(int *)(*(int *)(param_4 + -8) + 0x2f8);
  local_8 = param_2;
  local_c = FUN_005715e0(*(undefined4 *)(param_4 + -8),*(undefined4 *)(param_4 + -0x54));
  iVar2 = FUN_004edf8c(*(undefined4 *)(param_4 + -8));
  iVar2 = iVar2 - *(int *)(param_4 + -0x6c);
  switch(param_1) {
  case 0:
    iVar3 = FUN_0045bec4(*(undefined4 *)(*(int *)(param_4 + -8) + 0x270),&DAT_0056f59c);
    iVar4 = iVar4 - iVar3 * *(int *)(param_4 + -0x78);
    break;
  case 1:
    iVar3 = FUN_0045bec4(*(undefined4 *)(*(int *)(param_4 + -8) + 0x270),&DAT_0056f59c);
    iVar4 = iVar4 + iVar3 * *(int *)(param_4 + -0x78);
    break;
  case 2:
    iVar4 = iVar4 - *(int *)(param_4 + -0x78) * iVar2;
    break;
  case 3:
    iVar4 = iVar4 + *(int *)(param_4 + -0x78) * iVar2;
    break;
  case 4:
  case 5:
    if ((((*(byte *)(*(int *)(param_4 + -8) + 0x2b5) & 0x40) != 0) || (param_1 == 4)) &&
       (cVar1 = FUN_00405d08(*(undefined4 *)(param_4 + -8)), iVar4 = local_8, cVar1 != '\0')) {
      iVar4 = FUN_0056f1e8();
      iVar4 = iVar4 - local_8;
    }
    break;
  case 6:
    iVar4 = local_c - iVar2;
    break;
  case 7:
    iVar4 = 0;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (local_c - iVar2 <= iVar4) {
    iVar4 = local_c - iVar2;
  }
  iVar2 = *(int *)(*(int *)(param_4 + -8) + 0x2f8);
  if (iVar4 != iVar2) {
    *(int *)(*(int *)(param_4 + -8) + 0x2f8) = iVar4;
    FUN_0056fc30(*(undefined4 *)(param_4 + -8),iVar2 - iVar4,0);
    FUN_00404f08(local_1c,0x10,0);
    local_10 = *(undefined4 *)(*(int *)(param_4 + -8) + 0x2a0);
    FUN_0056f12c(*(undefined4 *)(param_4 + -8),local_1c);
    (**(code **)(**(int **)(param_4 + -8) + 0x9c))();
    FUN_0056fde0(*(undefined4 *)(param_4 + -8));
  }
  return;
}
