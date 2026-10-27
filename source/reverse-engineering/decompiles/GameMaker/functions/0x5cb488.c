// rea decompile_all
// name: FUN_005cb488
// address: 0x5cb488
// body: available
// range: 0x5cb488-0x5cb588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb4a7 (push 0x5cb589 followed by fs-segment stack chaining); handler 0x5cb589 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb488(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005cb589;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  FUN_005caf28(*(undefined4 *)(param_4 + -0xc),&local_1c);
  (**(code **)(*local_1c + 0x84))(local_1c,param_1,L"http://www.w3.org/2001/XMLSchema-instance");
  FUN_0042c1fc(&local_18,&local_8);
  FUN_00407eb8(param_2,local_8);
  if (*param_2 != 0) {
    iVar2 = *param_2;
    if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
      iVar2 = FUN_00407048(param_2,*param_2);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    iVar2 = 1;
    if (1 < iVar3) {
      do {
        if (*(ushort *)(*param_2 + -2 + iVar2 * 2) < 0x21) {
          FUN_004086a8(*param_2,iVar2,0x7fffffff,&local_24);
          FUN_00415e90(local_24,&local_20);
          FUN_00407eb8(param_2,local_20);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = (int)&local_18;
  puStack_38 = &LAB_005cb590;
  iStack_3c = 0x5cb570;
  thunk_FUN_00406e80(&local_24,2,puVar1);
  iStack_3c = 0x5cb578;
  FUN_0040b140(&local_1c);
  iStack_3c = 0x5cb580;
  FUN_004249e8(&local_18);
  iStack_3c = 0x5cb588;
  thunk_FUN_00406e5c(&local_8);
  return;
}
