// rea decompile_all
// name: FUN_004fed70
// address: 0x4fed70
// body: available
// range: 0x4fed70-0x4fee04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fed70(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  *(undefined1 *)(param_1 + 0x50) = 1;
  iVar1 = FUN_004fe4c8(&PTR_LAB_004e9de4,1,0);
  *(int *)(iVar1 + 0x278) = param_1;
  FUN_004f7684(iVar1);
  FUN_00407eb8(iVar1 + 0x280,*(undefined4 *)(param_1 + 0x34));
  FUN_00407eb8(iVar1 + 0x284,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(iVar1 + 0x288) = *(undefined4 *)(param_1 + 0x40);
  FUN_004fe604(iVar1,&local_1c);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar2 = FUN_004fee5c(&PTR_LAB_004ea220,1,iVar1,param_1);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
  }
  else {
    FUN_004ff550(*(int *)(param_1 + 0x48),iVar1);
    FUN_004ff55c(*(undefined4 *)(param_1 + 0x48));
  }
  return;
}
