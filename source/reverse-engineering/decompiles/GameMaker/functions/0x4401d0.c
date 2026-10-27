// rea decompile_all
// name: FUN_004401d0
// address: 0x4401d0
// body: available
// range: 0x4401d0-0x440253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4401ff (push 0x440254 followed by fs-segment stack chaining); handler 0x440254 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004401d0(int param_1,char param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_c;
  undefined1 local_5;

  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x4401ea;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_30 = &LAB_00440254;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  puStack_2c = &stack0xfffffffc;
  if (param_4 != '\0') {
    puStack_2c = &stack0xfffffffc;
    cVar2 = FUN_004220a4(param_5);
    if (cVar2 == '\0') {
      uVar3 = 1;
      goto LAB_0044021c;
    }
  }
  uVar3 = 0;
LAB_0044021c:
  *(undefined1 *)(param_1 + 0x1c) = uVar3;
  FUN_004219a0(*(undefined4 *)(param_1 + 0x18),param_3,&local_c);
  FUN_004400bc(param_1,0,local_c);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0044025b;
  puStack_30 = (undefined1 *)0x440253;
  FUN_00409ce0(&local_c,&DAT_004108f8,puVar1);
  return;
}
