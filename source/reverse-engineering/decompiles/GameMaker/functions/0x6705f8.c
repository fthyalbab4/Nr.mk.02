// rea decompile_all
// name: FUN_006705f8
// address: 0x6705f8
// body: available
// range: 0x6705f8-0x67067d inclusive
// range: 0x670688-0x67069d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x670613 (push 0x6706e9 followed by fs-segment stack chaining); handler 0x6706e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67062a (push 0x6706af followed by fs-segment stack chaining); handler 0x6706af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x670659 (push 0x67069e followed by fs-segment stack chaining); handler 0x67069e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x670667 (push 0x67067e followed by fs-segment stack chaining); handler 0x67067e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006705f8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_24 = &LAB_006706e9;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x67061f;
  (**(code **)(*param_1 + 0x3c))(param_1,0);
  puStack_30 = &LAB_006706af;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0xff00;
  puStack_3c = (undefined1 *)0x67063c;
  puStack_2c = &stack0xfffffffc;
  FUN_0041748c(param_2,&local_c);
  puStack_3c = (undefined1 *)0x67064b;
  local_8 = FUN_0043fc08(&PTR_LAB_00433204,1,local_c);
  puStack_3c = &LAB_0067069e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_48 = &LAB_0067067e;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  FUN_006706f8(param_1,local_8);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_4c;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_006706a5;
  puStack_3c = (undefined1 *)0x67069d;
  FUN_00405a7c(local_8,uStack_40,puVar1);
  return;
}
