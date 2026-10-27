// rea decompile_all
// name: FUN_004405d8
// address: 0x4405d8
// body: available
// range: 0x4405d8-0x440707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4405f3 (push 0x440708 followed by fs-segment stack chaining); handler 0x440708 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004405d8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_00440708;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar1 = FUN_0043e89c(param_1);
  if ((cVar1 == '\x06') || (cVar1 == '\f')) {
    FUN_004404f0(param_1,&local_10);
    FUN_00408420(param_2,local_10);
  }
  else {
    cVar1 = FUN_00440718(param_1);
    if (cVar1 == '\x12') {
      FUN_0043e8c0(param_1,&local_c,4);
      FUN_00409dfc(&local_8,&DAT_00410758,1,local_c * 2);
      FUN_0043e8c0(param_1,local_8,local_c * 2);
      uVar2 = FUN_004221c0();
      FUN_0042212c(uVar2,local_8,&local_14);
      FUN_00408420(param_2,local_14);
    }
    else if (cVar1 == '\x14') {
      FUN_0043e8c0(param_1,&local_c,4);
      FUN_00409dfc(&local_8,&DAT_00410758,1,local_c);
      FUN_0043e8c0(param_1,local_8,local_c);
      uVar2 = FUN_004221fc();
      FUN_0042212c(uVar2,local_8,&local_18);
      FUN_00408420(param_2,local_18);
    }
    else {
      FUN_0043e23c();
    }
  }
  *in_FS_OFFSET = puStack_28;
  puStack_24 = (undefined1 *)0x4406f9;
  thunk_FUN_004072fc(&local_18,3,unaff_ESI);
  puStack_24 = (undefined1 *)0x440707;
  FUN_00409e08(&local_8,&DAT_00410758);
  return;
}
