// rea decompile_all
// name: FUN_00587f54
// address: 0x587f54
// body: available
// range: 0x587f54-0x5880bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x587f8c (push 0x5880bc followed by fs-segment stack chaining); handler 0x5880bc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587f54(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int local_48;
  int local_34 [2];
  double local_2c;
  undefined4 local_24;
  int local_1c [2];
  double local_14;
  undefined4 local_c;

  puStack_58 = (undefined1 *)0x587f73;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_58 = (undefined1 *)0x587f81;
  FUN_00408ff8(local_34,&DAT_00615f70);
  puStack_5c = &LAB_005880bc;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  iVar1 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),local_1c);
  if (iVar1 == 0) {
    iVar1 = 1;
    while (((iVar1 < *(int *)(param_2 + 0x28) &&
            (*(int *)(**(int **)(param_2 + 0x2c) + iVar1 * 0x38) != 0x1c)) &&
           ((*(int *)(**(int **)(param_2 + 0x2c) + iVar1 * 0x38) != 0x1b ||
            ((((FUN_00586fa0(param_1,**(undefined4 **)
                                       (**(int **)(param_2 + 0x2c) + 0x2c + iVar1 * 0x38),local_34),
               local_1c[0] != local_34[0] || (local_1c[0] != 0)) || (local_14 != local_2c)) &&
             ((bVar3 = local_1c[0] == 1, !bVar3 || (FUN_00407a5c(local_c,local_24), !bVar3)))))))))
    {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = *(int *)(param_2 + 0x28) + -1;
    if (iVar1 <= iVar2) {
      local_48 = (iVar2 - iVar1) + 1;
      do {
        iVar2 = *(int *)(**(int **)(param_2 + 0x2c) + iVar1 * 0x38);
        if (((iVar2 != 0x1c) && (iVar2 != 0x1b)) &&
           ((iVar2 = FUN_00588150(param_1,**(int **)(param_2 + 0x2c) + iVar1 * 0x38,param_3),
            iVar2 == -3 || (iVar2 != 0)))) break;
        iVar1 = iVar1 + 1;
        local_48 = local_48 + -1;
      } while (local_48 != 0);
    }
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_005880c3;
  puStack_5c = (undefined1 *)0x5880bb;
  FUN_00409120(local_34,&DAT_00615f70,2);
  return;
}
