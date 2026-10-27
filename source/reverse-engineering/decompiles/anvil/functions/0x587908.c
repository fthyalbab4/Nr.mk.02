// rea decompile_all
// name: FUN_00587908
// address: 0x587908
// body: available
// range: 0x587908-0x5879bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x587931 (push 0x5879be followed by fs-segment stack chaining); handler 0x5879be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587908(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_1c [2];
  double local_14;

  puStack_34 = (undefined1 *)0x587926;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_005879be;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  while( true ) {
    iVar2 = FUN_00588150(param_1,**(undefined4 **)(param_2 + 0x2c),param_3);
    if ((iVar2 == -3) ||
       (((iVar2 != 0 && (iVar2 != -4)) ||
        (iVar2 = FUN_00586fa0(param_1,**(int **)(param_2 + 0x2c) + 0x38,local_1c), iVar2 != 0))))
    goto LAB_005879a2;
    if (local_1c[0] != 0) break;
    if (0.5 <= local_14) {
LAB_005879a2:
      puVar1 = puStack_34;
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = &LAB_005879c5;
      puStack_38 = (undefined1 *)0x5879bd;
      FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
      return;
    }
  }
  FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x68),
               L"Boolean expression expected");
  goto LAB_005879a2;
}
