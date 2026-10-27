// rea decompile_all
// name: FUN_00520c7c
// address: 0x520c7c
// body: available
// range: 0x520c7c-0x520d29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x520c95 (push 0x520d2a followed by fs-segment stack chaining); handler 0x520d2a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520c7c(short *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_00520d2a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 0;
  puVar1 = &stack0xfffffffc;
  if (param_1 != (short *)0x0) {
    while (psVar3 = param_1, puVar1 = puStack_1c, *param_1 != 0) {
      while (cVar2 = FUN_0041562c(*psVar3,&DAT_00520d3c), cVar2 == '\0') {
        psVar3 = (short *)FUN_0041d7c8(psVar3);
      }
      iVar4 = (int)psVar3 - (int)param_1 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)(((int)psVar3 - (int)param_1 & 1U) != 0);
      }
      FUN_00407ff4(&local_8,param_1,iVar4);
      iVar4 = FUN_0045bec4(*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 0x84) + 0x270),local_8)
      ;
      if (local_c < iVar4) {
        local_c = iVar4;
      }
      param_1 = psVar3;
      if (*psVar3 == 0xd) {
        param_1 = psVar3 + 1;
      }
      if (*param_1 == 10) {
        param_1 = param_1 + 1;
      }
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00520d31;
  puStack_20 = (undefined1 *)0x520d29;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
