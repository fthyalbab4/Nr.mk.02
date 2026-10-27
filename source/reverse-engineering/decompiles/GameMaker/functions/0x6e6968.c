// rea decompile_all
// name: FUN_006e6968
// address: 0x6e6968
// body: available
// range: 0x6e6968-0x6e6a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6e6989 (push 0x6e6a0c followed by fs-segment stack chaining); handler 0x6e6a0c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6968(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x6e697e;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_006e6a0c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar5 = *(int *)(param_1 + 4);
  puStack_20 = &stack0xfffffffc;
  if (iVar5 != 0) {
    iVar1 = *(int *)(**(int **)(param_1 + 8) + 4);
    puStack_20 = &stack0xfffffffc;
    uVar3 = FUN_00701c28(&DAT_00700d94,CONCAT31((int3)((uint)iVar5 >> 8),1),iVar1 * iVar5,
                         *(undefined4 *)(**(int **)(param_1 + 8) + 8));
    iVar5 = *(int *)(param_1 + 4);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        FUN_007034e0(uVar3,iVar4 * iVar1,0,0,*(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_007027fc(uVar3,local_8);
    FUN_00405a7c(uVar3);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006e6a13;
  puStack_24 = (undefined1 *)0x6e6a0b;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar2);
  return;
}
