// rea decompile_all
// name: FUN_004f5f40
// address: 0x4f5f40
// body: available
// range: 0x4f5f40-0x4f5fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f5f57 (push 0x4f5fe8 followed by fs-segment stack chaining); handler 0x4f5fe8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5f40(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004f5fe8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar3 = (char)param_2;
  puVar1 = &stack0xfffffffc;
  if ((cVar3 != *(char *)(param_1 + 0x1ec)) &&
     (*(char *)(param_1 + 0x1ec) = cVar3, puVar1 = &stack0xfffffffc,
     (*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
    FUN_004ebd54(param_1,param_2);
    if (cVar3 == '\0') {
      FUN_00405a7c(*(undefined4 *)(param_1 + 0x1c4));
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      FUN_0040b140(param_1 + 0x1c8);
      puVar1 = puStack_18;
    }
    else {
      if (*(int *)(param_1 + 0x1c4) == 0) {
        uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
        *(undefined4 *)(param_1 + 0x1c4) = uVar2;
      }
      FUN_00405d08(param_1,&local_8);
      FUN_0040b158(param_1 + 0x1c8,local_8);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f5fef;
  puStack_1c = (undefined1 *)0x4f5fe7;
  FUN_0040b140(&local_8,uStack_20,puVar1);
  return;
}
