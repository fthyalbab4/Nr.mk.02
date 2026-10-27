// rea decompile_all
// name: FUN_005ce8d8
// address: 0x5ce8d8
// body: available
// range: 0x5ce8d8-0x5ce97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ce8ec (push 0x5ce97c followed by fs-segment stack chaining); handler 0x5ce97c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ce8d8(undefined4 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005ce97c;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_1c;
  FUN_00407eb8(param_1,L"abcdef01-2345-6789-abcd-ef0123456789");
  uVar3 = FUN_004524c4(&DAT_004512d4,1,0x100);
  FUN_00452568(uVar3,0x80000002);
  cVar2 = FUN_004527e4(uVar3,L"\\SOFTWARE\\Microsoft\\Cryptography");
  if (cVar2 != '\0') {
    FUN_004530e0(uVar3,L"MachineGuid",param_1);
  }
  FUN_00452538(uVar3);
  puVar4 = &local_8;
  FUN_0041e164(*param_1,&DAT_005cea74,&DAT_005cea64,puVar4,1);
  FUN_00407eb8(param_1,local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (int)puVar4;
  puStack_1c = &LAB_005ce983;
  thunk_FUN_00406e5c(&local_8,puVar4,puVar1);
  return;
}
