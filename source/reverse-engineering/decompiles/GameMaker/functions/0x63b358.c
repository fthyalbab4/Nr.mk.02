// rea decompile_all
// name: FUN_0063b358
// address: 0x63b358
// body: available
// range: 0x63b358-0x63b438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63b371 (push 0x63b439 followed by fs-segment stack chaining); handler 0x63b439 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063b358(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0063b439;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (DAT_0077f0f0 == (int *)0x0) {
    DAT_0077f0f0 = (int *)FUN_0063a6f4(&PTR_FUN_0063997c,1,2);
    FUN_00407eb8(DAT_0077f0f0 + 0x20,L"Open an Image");
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  FUN_007022dc(DAT_0077f0f0[0x39],param_1);
  if (*param_2 != 0) {
    cVar2 = FUN_00416e88(*param_2);
    if (cVar2 != '\0') {
      FUN_004cf3e4(DAT_0077f0f0,*param_2);
    }
  }
  cVar2 = (**(code **)(*DAT_0077f0f0 + 0x40))();
  if (cVar2 != '\0') {
    FUN_007022dc(param_1,DAT_0077f0f0[0x38]);
    FUN_004cf2f4(DAT_0077f0f0,&local_c);
    FUN_0041735c(local_c,&local_8);
    FUN_00407eb8(param_2,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0063b440;
  puStack_20 = (undefined1 *)0x63b430;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x63b438;
  thunk_FUN_00406e5c(&local_8);
  return;
}
