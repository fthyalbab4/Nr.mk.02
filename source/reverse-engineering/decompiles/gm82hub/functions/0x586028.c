// rea decompile_all
// name: FUN_00586028
// address: 0x586028
// body: available
// range: 0x586028-0x58608d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586045 (push 0x58608e followed by fs-segment stack chaining); handler 0x58608e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586028(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x58603a;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_0058608e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar5 = -1;
  puStack_18 = &stack0xfffffffc;
  if (-1 < DAT_00686b0c + -1) {
    iVar4 = 0;
    iVar3 = DAT_00686b0c;
    puStack_18 = &stack0xfffffffc;
    do {
      iVar2 = FUN_0057596c(*(undefined4 *)(DAT_00686b08 + iVar4 * 4),local_8);
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 0x10);
      }
      if (-1 < iVar5) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00586095;
  puStack_1c = (undefined1 *)0x58608d;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
