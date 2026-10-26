// rea decompile_all
// name: FUN_005875cc
// address: 0x5875cc
// body: available
// range: 0x5875cc-0x587694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5875f6 (push 0x587695 followed by fs-segment stack chaining); handler 0x587695 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005875cc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_1c [6];

  puStack_3c = (undefined1 *)0x5875eb;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_40 = &LAB_00587695;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  iVar2 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),local_1c);
  if (iVar2 == 0) {
    if (local_1c[0] == 0) {
      iVar2 = FUN_004048b8();
      if (-1 < iVar2 + -1) {
        while (iVar3 = FUN_00588150(param_1,**(int **)(param_2 + 0x2c) + 0x38,param_3), iVar3 != -3)
        {
          if (((iVar3 != 0) && (iVar3 != -4)) || (iVar2 = iVar2 + -1, iVar2 == 0)) break;
        }
      }
    }
    else {
      FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x30)
                   ,L"Repeat count must be a number");
    }
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0058769c;
  puStack_40 = (undefined1 *)0x587694;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
