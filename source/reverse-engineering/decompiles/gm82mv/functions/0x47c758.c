// rea decompile_all
// name: FUN_0047c758
// address: 0x47c758
// body: available
// range: 0x47c758-0x47c83a inclusive
// range: 0x47c842-0x47c857 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47c778 (push 0x47c858 followed by fs-segment stack chaining); handler 0x47c858 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47c7b2 (push 0x47c83b followed by fs-segment stack chaining); handler 0x47c83b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c758(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0047c858;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (1 < (byte)(*(char *)(param_1[7] + 0x2a0) - 3U)) {
    puStack_2c = (undefined1 *)0x47c79a;
    FUN_0043aa0c(param_1);
    *(undefined1 *)(param_1[7] + 0x2e5) = 1;
    puStack_30 = &LAB_0047c83b;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    if (param_3 != param_2) {
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_8);
      uVar2 = FUN_00406268(param_1[7],param_2);
      FUN_00406268(param_1[7],param_2,0);
      (**(code **)(*param_1 + 0x48))(param_1,param_2);
      (**(code **)(*param_1 + 0x60))(param_1,param_3,local_8);
      FUN_00406268(param_1[7],param_3,uVar2);
    }
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x47c842;
    *(undefined1 *)(param_1[7] + 0x2e5) = 0;
    puStack_30 = (undefined1 *)0x47c83a;
    FUN_0043aad4(param_1,uStack_34,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0047c85f;
  puStack_24 = (undefined1 *)0x47c857;
  thunk_FUN_004072d8(&local_8,uStack_28,&stack0xfffffffc);
  return;
}
