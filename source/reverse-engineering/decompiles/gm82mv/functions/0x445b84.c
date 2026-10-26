// rea decompile_all
// name: FUN_00445b84
// address: 0x445b84
// body: available
// range: 0x445b84-0x445c3b inclusive
// range: 0x445c43-0x445c58 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445ba3 (push 0x445c59 followed by fs-segment stack chaining); handler 0x445c59 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445bd7 (push 0x445c3c followed by fs-segment stack chaining); handler 0x445c3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445b84(int param_1,undefined4 param_2)

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

  puStack_14 = (undefined1 *)0x445b98;
  local_8 = param_2;
  FUN_0040b2dc(param_2);
  puStack_18 = &LAB_00445c59;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_1 != 0) {
    puStack_20 = (undefined1 *)0x445bb4;
    puStack_14 = &stack0xfffffffc;
    FUN_00445650(param_1,local_8);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = &LAB_00445c60;
    puStack_18 = (undefined1 *)0x445c58;
    FUN_0040b268(&local_8,uStack_1c,puVar1);
    return;
  }
  puStack_20 = (undefined1 *)0x445bc9;
  puStack_14 = &stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_004095b8(0x18,&DAT_00434d4c);
  puStack_24 = &LAB_00445c3c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puStack_20 = &stack0xfffffffc;
  FUN_0040b280(puVar2 + 4,local_8);
  FUN_00445894(&PTR_LAB_00434e34,puVar2,1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x445c43;
  puStack_24 = (undefined1 *)0x445c23;
  DVar3 = GetCurrentThreadId();
  if (DVar3 == *(DWORD *)PTR_DAT_00689680) {
    puStack_24 = (undefined1 *)0x445c3b;
    FUN_004095cc(puVar2,&DAT_00434d4c);
  }
  return;
}
