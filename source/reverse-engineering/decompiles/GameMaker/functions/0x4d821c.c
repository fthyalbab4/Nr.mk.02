// rea decompile_all
// name: FUN_004d821c
// address: 0x4d821c
// body: available
// range: 0x4d821c-0x4d8335 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d823d (push 0x4d8336 followed by fs-segment stack chaining); handler 0x4d8336 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d821c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  PCNZWCH lpString1;
  PCNZWCH lpString2;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x4d8232;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_004d8336;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = *param_1;
  puStack_1c = &stack0xfffffffc;
  if ((iVar2 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(iVar2 + -10) != 2)) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00407048(param_1,*param_1);
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 <= iVar5) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + -4);
    }
    lpString1 = (PCNZWCH)FUN_00407f44(*param_1);
    iVar2 = iVar5;
    lpString2 = (PCNZWCH)FUN_00407f44(local_8);
    iVar2 = CompareStringW(0x400,1,lpString1,iVar5,lpString2,iVar2);
    if (iVar2 == 2) {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407048(&local_8,local_8);
      }
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = *(undefined4 *)(iVar2 + -4);
      }
      FUN_00408778(param_1,1,uVar4);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d833d;
  puStack_20 = (undefined1 *)0x4d8335;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
