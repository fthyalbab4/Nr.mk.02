// rea decompile_all
// name: FUN_0048ddbc
// address: 0x48ddbc
// body: available
// range: 0x48ddbc-0x48deae inclusive
// range: 0x48dec7-0x48e044 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ddbc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  piVar1 = *(int **)(param_1 + 0x1a8);
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x1b1) == '\x06') {
      FUN_0045b96c(piVar1[0x11],2);
      FUN_0045b954(piVar1[0x11],0xe);
      FUN_0045b850(piVar1[0x11],0xffd8ce);
      FUN_0045bda4(piVar1[0x12],1);
      uVar2 = FUN_004edf8c(local_8);
      uVar3 = FUN_004edfcc(local_8);
      (**(code **)(*piVar1 + 0x74))(piVar1,0,0,uVar3,uVar2);
      return;
    }
    FUN_0045b96c(piVar1[0x11],0);
    FUN_0045b954(piVar1[0x11],4);
    FUN_0045b850(piVar1[0x11],0);
    FUN_0045bda4(piVar1[0x12],0);
  }
  FUN_0045b9a4(piVar1[0x11],1);
  if (*(char *)(local_8 + 0x1b0) == '\0') {
    local_c = 0xff000010;
    local_10 = 0xff000014;
  }
  else {
    local_c = 0xff000014;
    local_10 = 0xff000010;
  }
  uVar2 = local_c;
  switch(*(undefined1 *)(local_8 + 0x1b1)) {
  case 0:
    FUN_0040c114(0,0,*(int *)(local_8 + 0x48) + -1,local_20,*(int *)(local_8 + 0x4c) + -1);
    FUN_0048dc8c(local_20);
    break;
  case 1:
    local_c = local_10;
    FUN_0040c114(1,1,*(int *)(local_8 + 0x48) + -1,local_20,*(int *)(local_8 + 0x4c) + -1);
    FUN_0048dc8c(local_20);
    local_10 = uVar2;
    local_c = uVar2;
    FUN_0040c114(0,0,*(int *)(local_8 + 0x48) + -2,local_20,*(int *)(local_8 + 0x4c) + -2);
    FUN_0048dc8c(local_20);
    break;
  case 2:
    FUN_0048dd78(local_c,0,0,0,*(undefined4 *)(local_8 + 0x48));
    FUN_0048dd78(local_10,0,1,1,*(undefined4 *)(local_8 + 0x48));
    break;
  case 3:
    iVar4 = *(int *)(local_8 + 0x4c) + -2;
    FUN_0048dd78(local_c,0,iVar4,iVar4,*(undefined4 *)(local_8 + 0x48));
    iVar4 = *(int *)(local_8 + 0x4c) + -1;
    FUN_0048dd78(local_10,0,iVar4,iVar4,*(undefined4 *)(local_8 + 0x48));
    break;
  case 4:
    FUN_0048dd78(local_c,0,0,*(undefined4 *)(local_8 + 0x4c),0);
    FUN_0048dd78(local_10,1,0,*(undefined4 *)(local_8 + 0x4c),1);
    break;
  case 5:
    iVar4 = *(int *)(local_8 + 0x48) + -2;
    FUN_0048dd78(local_c,iVar4,0,*(undefined4 *)(local_8 + 0x4c),iVar4);
    iVar4 = *(int *)(local_8 + 0x48) + -1;
    FUN_0048dd78(local_10,iVar4,0,*(undefined4 *)(local_8 + 0x4c),iVar4);
  }
  return;
}
