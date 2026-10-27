// rea decompile_all
// name: FUN_006b7a68
// address: 0x6b7a68
// body: available
// range: 0x6b7a68-0x6b7c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b7a8c (push 0x6b7c30 followed by fs-segment stack chaining); handler 0x6b7c30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7a68(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x6b7a81;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_20 = &LAB_006b7c30;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (-1 < param_2) {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    if (iVar2 <= param_2) {
      iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      FUN_00409be0(param_1 + 0x2d8,&DAT_006aef44,1,param_2 + 1);
      iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      if (iVar2 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - iVar2) + 1;
        do {
          FUN_00409be0(*(int *)(param_1 + 0x2d8) + 4 + iVar2 * 0x10,&DAT_006aecd0,1,0);
          FUN_00407eb8(*(int *)(param_1 + 0x2d8) + iVar2 * 0x10,0);
          *(undefined1 *)(*(int *)(param_1 + 0x2d8) + 0xc + iVar2 * 0x10) = 1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00407eb8(*(int *)(param_1 + 0x2d8) + param_2 * 0x10,local_8);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    uVar5 = 0;
    if (iVar2 != 0) {
      uVar5 = *(undefined4 *)(iVar2 + -4);
    }
    FUN_00409be0(*(int *)(param_1 + 0x2d8) + 4 + param_2 * 0x10,&DAT_006aecd0,1,uVar5);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        iVar4 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar4 = FUN_00407048(&local_8,local_8);
        }
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + param_2 * 0x10) + iVar2 * 0xc) =
             *(undefined2 *)(iVar4 + iVar2 * 2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2d8) + 0xc + param_2 * 0x10) = 1;
    *(undefined1 *)(param_1 + 0x304) = 1;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006b7c37;
  puStack_20 = (undefined1 *)0x6b7c2f;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
