// rea decompile_all
// name: FUN_004ebd58
// address: 0x4ebd58
// body: available
// range: 0x4ebd58-0x4ebe42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ebd71 (push 0x4ebe43 followed by fs-segment stack chaining); handler 0x4ebe43 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ebd58(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004ebe43;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004081e8(&local_8,param_2[1]);
  while( true ) {
    piVar2 = (int *)(**(code **)(*param_2 + 4))();
    if (param_2 == piVar2) break;
    param_2 = piVar2;
    if (piVar2[1] != 0) {
      FUN_004081e8(&local_8,piVar2[1]);
    }
  }
  if (local_8 != 0) {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + -4);
    }
    if (0x2e < *(ushort *)(iVar3 + -2 + iVar5 * 2)) {
      FUN_004085b8(&local_8,&LAB_004ebe60);
    }
  }
  FUN_004eb164(param_1,&local_c);
  uVar6 = FUN_00408220(local_c);
  uVar7 = FUN_00408220(local_8);
  FUN_004ebbcc(param_1,uVar7,uVar6);
  puVar1 = puStack_20;
  *in_FS_OFFSET = 0x10;
  puStack_20 = &LAB_004ebe4a;
  uStack_24 = 0x4ebe42;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
