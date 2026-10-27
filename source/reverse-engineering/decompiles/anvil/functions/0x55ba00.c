// rea decompile_all
// name: FUN_0055ba00
// address: 0x55ba00
// body: available
// range: 0x55ba00-0x55bb09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55ba23 (push 0x55bb0a followed by fs-segment stack chaining); handler 0x55bb0a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ba00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x55ba18;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_0055bb0a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  cVar2 = FUN_0055b774();
  if (cVar2 == '\0') {
    FUN_0055b728();
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8,param_4);
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + -4);
    }
    pcVar5 = *(char **)(param_4 + -4);
    for (; (((cVar2 = FUN_0055b774(), cVar2 == '\0' && (*pcVar5 != '\r')) && (*pcVar5 != '\0')) &&
           (0 < iVar6)); iVar6 = iVar6 + -1) {
      pcVar5 = pcVar5 + 1;
    }
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    cVar2 = iVar3 == 0;
    uVar4 = 0;
    if (!(bool)cVar2) {
      cVar2 = (undefined4 *)(iVar3 + -4) == (undefined4 *)0x0;
      uVar4 = *(undefined4 *)(iVar3 + -4);
    }
    FUN_004082c0(&local_c,*(undefined4 *)(param_4 + -4),uVar4);
    FUN_0040891c(local_c,local_8);
    if (cVar2 != '\0') {
      *(char **)(param_4 + -4) = pcVar5;
    }
    FUN_0055b728();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0055bb11;
  puStack_20 = (undefined1 *)0x55bb09;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
