// rea decompile_all
// name: FUN_0070057c
// address: 0x70057c
// body: available
// range: 0x70057c-0x7006e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7005d0 (push 0x7006e5 followed by fs-segment stack chaining); handler 0x7006e5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070057c(undefined4 param_1)

{
  undefined1 *puVar1;
  HANDLE hObject;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238 [9];
  undefined1 local_214 [523];
  undefined1 local_9;
  undefined4 local_8;

  local_24c = 0;
  local_254 = 0;
  local_250 = 0;
  local_23c = 0;
  local_248 = 0;
  local_240 = 0;
  local_244 = 0;
  puStack_264 = (undefined1 *)0x7005bf;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_268 = &LAB_007006e5;
  uStack_26c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_26c;
  puStack_264 = &stack0xfffffffc;
  hObject = (HANDLE)FUN_005a64f8(2,0);
  local_238[0] = 0x22c;
  iVar2 = FUN_005a6518(hObject,local_238);
  local_9 = 0;
  do {
    uVar3 = iVar2 == 0;
    if ((bool)uVar3) {
      CloseHandle(hObject);
      puVar1 = puStack_264;
      *in_FS_OFFSET = uStack_26c;
      puStack_264 = &LAB_007006ec;
      puStack_268 = (undefined1 *)0x7006dc;
      thunk_FUN_00406e80(&local_254,7,puVar1);
      puStack_268 = (undefined1 *)0x7006e4;
      thunk_FUN_00406e5c(&local_8);
      return;
    }
    FUN_004080c8(&local_244,local_214,0x104);
    FUN_00417398(local_244,&local_240);
    FUN_00415690(local_240,&local_23c);
    uVar4 = local_23c;
    FUN_00415690(local_8,&local_248);
    FUN_00408640(uVar4,local_248);
    if ((bool)uVar3) {
LAB_0070069e:
      local_9 = 1;
    }
    else {
      FUN_004080c8(&local_250,local_214,0x104);
      FUN_00415690(local_250,&local_24c);
      uVar4 = local_24c;
      FUN_00415690(local_8,&local_254);
      FUN_00408640(uVar4,local_254);
      if ((bool)uVar3) goto LAB_0070069e;
    }
    iVar2 = FUN_005a6538(hObject,local_238);
  } while( true );
}
