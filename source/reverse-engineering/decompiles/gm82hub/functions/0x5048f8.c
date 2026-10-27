// rea decompile_all
// name: FUN_005048f8
// address: 0x5048f8
// body: available
// range: 0x5048f8-0x504985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50490d (push 0x504986 followed by fs-segment stack chaining); handler 0x504986 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005048f8(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_00504986;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x3ac) != '\0') &&
     (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x3ad) != '\0')) {
    FUN_005048a8(param_1,&local_8);
    cVar2 = FUN_00504f70(local_8);
    puVar1 = puStack_14;
    if (cVar2 == '\0') {
      FUN_0040b9d0(PTR_LAB_006891b4,&local_c);
      iVar3 = FUN_004a1768(local_c,3,3,0,0xffffffff,0xffffffff,0);
      puVar1 = puStack_14;
      if (iVar3 != 6) {
        *(undefined4 *)(param_1 + 0x2b8) = 0;
      }
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0050498d;
  puStack_18 = (undefined1 *)0x504985;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
