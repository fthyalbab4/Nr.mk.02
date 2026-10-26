// rea decompile_all
// name: FUN_005877f8
// address: 0x5877f8
// body: available
// range: 0x5877f8-0x5878af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x587821 (push 0x5878b0 followed by fs-segment stack chaining); handler 0x5878b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005877f8(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_1c [2];
  double local_14;

  puStack_34 = (undefined1 *)0x587816;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_005878b0;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  do {
    iVar2 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),local_1c);
    if (iVar2 != 0) {
LAB_00587894:
      puVar1 = puStack_34;
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = &LAB_005878b7;
      puStack_38 = (undefined1 *)0x5878af;
      FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
      return;
    }
    if (local_1c[0] != 0) {
      FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x30)
                   ,L"Boolean expression expected");
      goto LAB_00587894;
    }
    if (((local_14 < 0.5) ||
        (iVar2 = FUN_00588150(param_1,**(int **)(param_2 + 0x2c) + 0x38,param_3), iVar2 == -3)) ||
       ((iVar2 != 0 && (iVar2 != -4)))) goto LAB_00587894;
  } while( true );
}
