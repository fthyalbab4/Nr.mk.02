// rea decompile_all
// name: FUN_00478620
// address: 0x478620
// body: available
// range: 0x478620-0x478711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47863a (push 0x478712 followed by fs-segment stack chaining); handler 0x478712 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478620(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 uVar6;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_00478712;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  FUN_00415fa0(param_2,1,&local_8);
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  iStack_28 = 0x478679;
  iVar3 = FUN_004bb5c8(*(undefined4 *)(param_1 + 0x1c));
  uVar6 = iVar5 == iVar3;
  if ((bool)uVar6) {
    FUN_004bb658(*(undefined4 *)(param_1 + 0x1c),&local_c);
    iStack_28 = 0x478697;
    FUN_0040891c(local_8,local_c);
    bVar1 = !(bool)uVar6;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iStack_28 = local_8;
    uVar4 = FUN_004c45dc(*(undefined4 *)(param_1 + 0x1c));
    iVar3 = FUN_0040f050(uVar4,0xc,0);
    if (iVar3 == 0) {
      FUN_0040b9d0(PTR_LAB_006892c8,&local_10);
      FUN_0041bd4c(&LAB_0042dc24,1,local_10);
      FUN_00406ab4();
    }
    FUN_004bcb48(*(undefined4 *)(param_1 + 0x1c),0xb012,0,0);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = iStack_28;
  puStack_20 = &LAB_00478719;
  iStack_24 = 0x478701;
  thunk_FUN_004072d8(&local_10,iStack_28,puVar2);
  iStack_24 = 0x478709;
  thunk_FUN_004072d8(&local_c);
  iStack_24 = 0x478711;
  thunk_FUN_004072d8(&local_8);
  return;
}
