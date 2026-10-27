// rea decompile_all
// name: FUN_005b6294
// address: 0x5b6294
// body: available
// range: 0x5b6294-0x5b633d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b62c6 (push 0x5b633e followed by fs-segment stack chaining); handler 0x5b633e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6294(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;

  local_10 = 0;
  local_8 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x5b62b1;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_3c = &LAB_005b633e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  uStack_44 = 0x5b62d3;
  puStack_38 = &stack0xfffffffc;
  FUN_00407f0c(&local_8,param_3);
  if (local_8 == 0) {
    uStack_44 = 0x5b62e3;
    FUN_0041b4f0(param_5,&local_8);
    if (local_8 == 0) {
      uStack_44 = 0;
      FUN_0040b75c(PTR_PTR_0078184c,&local_10);
      local_18 = param_5;
      local_14 = 0;
      FUN_00417d78(&local_8,local_10,&local_18);
    }
  }
  FUN_0041c150(param_1,0,local_8,param_4);
  puVar1 = puStack_3c;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_005b6345;
  uStack_40 = 0x5b6335;
  thunk_FUN_00406e5c(&local_10,uStack_44,puVar1);
  uStack_40 = 0x5b633d;
  thunk_FUN_00406e5c(&local_8);
  return;
}
