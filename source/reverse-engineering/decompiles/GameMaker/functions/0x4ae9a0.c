// rea decompile_all
// name: FUN_004ae9a0
// address: 0x4ae9a0
// body: available
// range: 0x4ae9a0-0x4aea7e inclusive
// range: 0x4aea86-0x4aea8c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ae9dd (push 0x4aea7f followed by fs-segment stack chaining); handler 0x4aea7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae9a0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  char local_d;
  undefined4 local_c;
  int local_8;

  puStack_28 = (undefined1 *)0x4ae9ba;
  local_c = param_2;
  local_8 = param_1;
  cVar2 = FUN_004f7a54(*(undefined4 *)(param_1 + 4));
  if (cVar2 != '\0') {
    puStack_28 = (undefined1 *)0x4ae9cb;
    FUN_004ae6b8(local_8);
  }
  *(undefined1 *)(local_8 + 0x14) = 1;
  puStack_2c = &LAB_004aea7f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_004ae12c(local_8);
  FUN_0043f488(local_c,&local_d,1);
  if (local_d == '\x01') {
    uVar4 = 0;
  }
  else {
    if (local_d != '\x03') {
      FUN_0040670c();
      return;
    }
    uVar4 = 4;
  }
  FUN_0043f488(local_c,&local_14,4);
  if (-1 < local_14 + -1) {
    do {
      uVar3 = FUN_004ae238(local_8,0,0);
      FUN_004adc08(uVar3,local_c,uVar4);
      FUN_00405d08(*(undefined4 *)(local_8 + 4),uVar3);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x4aea86;
  *(undefined1 *)(local_8 + 0x14) = 0;
  if (cVar2 != '\0') {
    puStack_2c = (undefined1 *)0x4aea7e;
    FUN_004ae704(local_8,uStack_30,puVar1);
  }
  return;
}
