// rea decompile_all
// name: FUN_004433b0
// address: 0x4433b0
// body: available
// range: 0x4433b0-0x443488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4433ca (push 0x443489 followed by fs-segment stack chaining); handler 0x443489 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004433b0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_00443489;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_0044175c(param_1);
  if ((cVar2 == '\x12') || (cVar2 == '\x14')) {
    FUN_00443498(param_1,&local_10);
    FUN_00408130(param_2,local_10);
  }
  else {
    local_c = 0;
    cVar2 = FUN_004435d8(param_1);
    if (cVar2 == '\x06') {
      FUN_00441780(param_1,&local_c,1);
    }
    else if (cVar2 == '\f') {
      FUN_00441780(param_1,&local_c,4);
    }
    else {
      FUN_004410fc();
    }
    FUN_00409be0(&local_8,&DAT_004108f8,1,local_c);
    FUN_00441780(param_1,local_8,local_c);
    uVar3 = FUN_00421f48();
    FUN_00421f98(uVar3,local_8,param_2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00443490;
  puStack_20 = (undefined1 *)0x44347a;
  FUN_00407a78(&local_10,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x443488;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
