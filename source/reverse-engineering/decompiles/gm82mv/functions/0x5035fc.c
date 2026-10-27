// rea decompile_all
// name: FUN_005035fc
// address: 0x5035fc
// body: available
// range: 0x5035fc-0x50369c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x503614 (push 0x50369d followed by fs-segment stack chaining); handler 0x50369d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005035fc(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0050369d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00415934(param_1[0xba],&local_8);
  uVar2 = local_8;
  FUN_00415934(param_2,&local_c);
  iVar4 = FUN_0041561c(local_c,uVar2);
  if (iVar4 != 0) {
    cVar3 = FUN_00504f70(param_1[0xba]);
    if (cVar3 != '\0') {
      FUN_004044c8(param_1[0xba]);
      FUN_0040448c();
    }
    FUN_004044c8(param_2);
    FUN_0040448c();
    FUN_00408d90(0,param_1 + 0xba);
    (**(code **)(*param_1 + 0x134))();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005036a4;
  puStack_1c = (undefined1 *)0x50369c;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
