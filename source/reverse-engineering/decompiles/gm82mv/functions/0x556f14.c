// rea decompile_all
// name: FUN_00556f14
// address: 0x556f14
// body: available
// range: 0x556f14-0x556faf inclusive
// range: 0x556fc7-0x556fdc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x556f31 (push 0x556fdd followed by fs-segment stack chaining); handler 0x556fdd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x556f75 (push 0x556fb0 followed by fs-segment stack chaining); handler 0x556fb0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556f14(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_00556fdd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *param_2 = 0;
  puStack_28 = (undefined1 *)0x556f4a;
  FUN_00416f54(*(undefined4 *)(param_1 + 0x14),L".tds",&local_8);
  puStack_28 = (undefined1 *)0x556f52;
  cVar2 = FUN_00538a14(local_8);
  if (cVar2 != '\0') {
    puStack_28 = (undefined1 *)0x40;
    puStack_2c = (undefined1 *)0x556f67;
    puVar3 = (undefined4 *)FUN_00538624(&LAB_005381ac,1,local_8);
    puStack_2c = &LAB_00556fb0;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    uVar4 = (**(code **)*puVar3)();
    cVar2 = FUN_00556a74(&PTR_LAB_005552e0,puVar3[1],uVar4);
    if (cVar2 == '\0') {
      FUN_00405fdc(puVar3);
    }
    else {
      *param_2 = puVar3;
    }
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00556fe4;
  puStack_20 = (undefined1 *)0x556fdc;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
