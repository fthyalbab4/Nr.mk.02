// rea decompile_all
// name: FUN_00448444
// address: 0x448444
// body: available
// range: 0x448444-0x4484e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448463 (push 0x448501 followed by fs-segment stack chaining); handler 0x448501 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448484 (push 0x4484e4 followed by fs-segment stack chaining); handler 0x4484e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448444(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x448458;
  FUN_0040b1b4(param_2);
  puStack_18 = &LAB_00448501;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x448476;
  puStack_14 = &stack0xfffffffc;
  puVar1 = (undefined4 *)FUN_004092dc(0x18,&DAT_00436ea0);
  puStack_24 = &LAB_004484e4;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *puVar1 = param_1;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puStack_20 = &stack0xfffffffc;
  FUN_0040b158(puVar1 + 4,param_2);
  FUN_00448688(*param_1,puVar1,1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004484eb;
  puStack_24 = (undefined1 *)0x4484cb;
  DVar2 = GetCurrentThreadId();
  if (DVar2 == *(DWORD *)PTR_DAT_0078296c) {
    puStack_24 = (undefined1 *)0x4484e3;
    FUN_004092f0(puVar1,&DAT_00436ea0);
  }
  return;
}
