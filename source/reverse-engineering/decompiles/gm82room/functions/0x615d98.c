// rea decompile_all
// name: FUN_00615d98
// address: 0x615d98
// body: available
// range: 0x615d98-0x615ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x615dcb (push 0x615ea4 followed by fs-segment stack chaining); handler 0x615ea4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615d98(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *in_FS_OFFSET;
  undefined1 *in_stack_ffffffb0;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 local_34 [24];
  undefined1 local_1c [24];

  puStack_40 = (undefined1 *)0x615db2;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_40 = (undefined1 *)0x615dc0;
  FUN_00408ff8(local_34,&DAT_00615f70);
  puStack_44 = &LAB_00615ea4;
  puStack_48 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_48;
  puStack_40 = &stack0xfffffffc;
  if (((*param_2 == 0x3f3) && (puStack_40 = &stack0xfffffffc, **(int **)param_2[0xb] == 5)) &&
     (puStack_40 = &stack0xfffffffc, *(int *)(*(int *)param_2[0xb] + 0x38) == 5)) {
    puStack_40 = &stack0xfffffffc;
    FUN_00409360(local_1c,*(int *)param_2[0xb] + 0x10,&DAT_00615f70);
    FUN_00409360(local_34,*(int *)param_2[0xb] + 0x48,&DAT_00615f70);
    in_stack_ffffffb0 = local_34;
    cVar1 = FUN_00572ed8(param_1,*(undefined4 *)(*(int *)param_2[0xb] + 0x68),param_2[1],
                         in_stack_ffffffb0,local_1c);
    if (cVar1 != '\0') {
      *param_2 = 5;
      FUN_00409360(param_2 + 4,local_1c,&DAT_00615f70);
      FUN_00409dfc(param_2[0xb],&DAT_00616078,1,0);
      FUN_004095cc(param_2[0xb],&DAT_00616078);
      param_2[10] = 0;
    }
  }
  *in_FS_OFFSET = (int)in_stack_ffffffb0;
  puStack_48 = &LAB_00615eab;
  FUN_00409120(local_34,&DAT_00615f70,2);
  return;
}
