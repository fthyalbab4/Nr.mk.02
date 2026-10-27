// rea decompile_all
// name: FUN_00448978
// address: 0x448978
// body: available
// range: 0x448978-0x448a2f inclusive
// range: 0x448a37-0x448a4c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448997 (push 0x448a4d followed by fs-segment stack chaining); handler 0x448a4d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4489cb (push 0x448a30 followed by fs-segment stack chaining); handler 0x448a30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448978(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x44898c;
  local_8 = param_2;
  FUN_0040b1b4(param_2);
  puStack_18 = &LAB_00448a4d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 != 0) {
    puStack_20 = (undefined1 *)0x4489a8;
    puStack_14 = &stack0xfffffffc;
    FUN_00448444(param_1,local_8);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = &LAB_00448a54;
    puStack_18 = (undefined1 *)0x448a4c;
    FUN_0040b140(&local_8,uStack_1c,puVar1);
    return;
  }
  puStack_20 = (undefined1 *)0x4489bd;
  puStack_14 = &stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_004092dc(0x18,&DAT_00436ea0);
  puStack_24 = &LAB_00448a30;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puStack_20 = &stack0xfffffffc;
  FUN_0040b158(puVar2 + 4,local_8);
  FUN_00448688(&PTR_LAB_00436f88,puVar2,1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x448a37;
  puStack_24 = (undefined1 *)0x448a17;
  DVar3 = GetCurrentThreadId();
  if (DVar3 == *(DWORD *)PTR_DAT_0078296c) {
    puStack_24 = (undefined1 *)0x448a2f;
    FUN_004092f0(puVar2,&DAT_00436ea0);
  }
  return;
}
