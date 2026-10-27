// rea decompile_all
// name: FUN_0043dd90
// address: 0x43dd90
// body: available
// range: 0x43dd90-0x43de5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ddad (push 0x43de5d followed by fs-segment stack chaining); handler 0x43de5d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043dd90(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0043de5d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    psVar3 = (short *)FUN_00408220(param_2);
    while (psVar5 = psVar3, puVar1 = puStack_20, *psVar3 != 0) {
      for (; (*psVar5 != 0 && (1 < (ushort)(*psVar5 - 0x2dU))); psVar5 = psVar5 + 1) {
      }
      iVar4 = (int)psVar5 - (int)psVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)(((int)psVar5 - (int)psVar3 & 1U) != 0);
      }
      FUN_004082d0(&local_8,psVar3,iVar4);
      iVar4 = FUN_004467a8(param_1,local_8);
      if ((iVar4 == 0) && (cVar2 = FUN_00415880(local_8,L"Owner"), cVar2 != '\0')) {
        iVar4 = param_1;
      }
      puVar1 = puStack_20;
      if (iVar4 == 0) break;
      psVar3 = psVar5;
      if (*psVar5 == 0x2e) {
        psVar3 = psVar5 + 1;
      }
      if (*psVar3 == 0x2d) {
        psVar3 = psVar3 + 1;
      }
      param_1 = iVar4;
      if (*psVar3 == 0x3e) {
        psVar3 = psVar3 + 1;
      }
    }
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043de64;
  puStack_24 = (undefined1 *)0x43de5c;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
