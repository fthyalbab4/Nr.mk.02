// rea decompile_all
// name: FUN_0043a008
// address: 0x43a008
// body: available
// range: 0x43a008-0x43a11a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a061 (push 0x43a11b followed by fs-segment stack chaining); handler 0x43a11b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a008(int param_1,char param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_40;
  int local_10;

  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  FUN_00405a4c(param_1,0);
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00787f70 + 8));
  uStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_40;
  local_10 = param_3;
  if (param_3 == 0) {
    local_10 = *(int *)(DAT_00787f70 + 0x20);
  }
  iVar4 = *(int *)(*(int *)(DAT_00787f70 + 4) + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      uVar2 = FUN_0043b048(*(undefined4 *)(DAT_00787f70 + 4),iVar5);
      cVar1 = FUN_0043987c(uVar2,local_10);
      if (cVar1 != '\0') {
        FUN_0043ae88(*(undefined4 *)(param_1 + 4),uVar2);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((param_4 != '\0') && (iVar4 = *(int *)(*(int *)(DAT_00787f70 + 4) + 8), -1 < iVar4 + -1)) {
    iVar5 = 0;
    do {
      iVar3 = FUN_0043b048(*(undefined4 *)(DAT_00787f70 + 4),iVar5);
      if (*(char *)(iVar3 + 0x10) != '\0') {
        FUN_0043ae88(*(undefined4 *)(param_1 + 4),iVar3);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStackY_40;
  uStackY_40 = 0x43a11a;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f70 + 8));
  return;
}
