// rea decompile_all
// name: FUN_006403fc
// address: 0x6403fc
// body: available
// range: 0x6403fc-0x6404c7 inclusive
// range: 0x6404d2-0x640504 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64041b (push 0x640505 followed by fs-segment stack chaining); handler 0x640505 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6404a1 (push 0x6404c8 followed by fs-segment stack chaining); handler 0x6404c8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006403fc(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00640505;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  puStack_30 = (undefined1 *)0x640436;
  local_c = FUN_00452b40(&DAT_00451994,1);
  puStack_30 = (undefined1 *)0x640447;
  FUN_00452c28(local_c,DAT_00688820);
  puStack_30 = (undefined1 *)0x640452;
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
  puStack_30 = (undefined1 *)0x64045d;
  cVar2 = FUN_004540b4(local_c,local_8);
  if (cVar2 != '\0') {
    puStack_30 = (undefined1 *)0x64046e;
    cVar2 = FUN_00452d70(local_c,local_8,1);
    if (cVar2 == '\0') {
      puStack_30 = (undefined1 *)0x64047a;
      FUN_00405fdc(local_c);
      goto LAB_006404e2;
    }
    puStack_30 = (undefined1 *)0x640487;
    FUN_004083c0(&local_10,*(undefined4 *)(in_stack_0000000c + 0x28));
    puStack_30 = (undefined1 *)0x640492;
    cVar2 = FUN_00453d28(local_c,local_10);
    if (cVar2 != '\0') {
      puStack_34 = &LAB_006404c8;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x28));
      FUN_00453a88(local_c,local_14);
      *(double *)(in_stack_00000004 + 2) = (double)in_ST0;
      *in_FS_OFFSET = uStack_38;
    }
    puStack_30 = (undefined1 *)0x6404da;
    FUN_00452bf8(local_c);
  }
  puStack_30 = (undefined1 *)0x6404e2;
  FUN_00405fdc(local_c);
LAB_006404e2:
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0064050c;
  puStack_28 = (undefined1 *)0x6404fc;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  puStack_28 = (undefined1 *)0x640504;
  thunk_FUN_004072d8(&local_8);
  return;
}
