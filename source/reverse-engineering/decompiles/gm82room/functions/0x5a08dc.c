// rea decompile_all
// name: FUN_005a08dc
// address: 0x5a08dc
// body: available
// range: 0x5a08dc-0x5a0a1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a0903 (push 0x5a0a1b followed by fs-segment stack chaining); handler 0x5a0a1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a08dc(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005a0a1b;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_00408194(param_2,PTR_u_<nobody>_00686bc0);
  _ImgDelayDescr_Module_Handle_00000000 = 0;
  if (DAT_00686bc8 == 0) {
    DAT_00686bc8 = FUN_00452b40(&DAT_00451994,1);
  }
  FUN_0041636c(*(undefined4 *)PTR_DAT_00688e9c,&local_c);
  FUN_00408678(&local_8,PTR_u__Software_Game_Maker_Scores__00686bcc,local_c);
  cVar2 = FUN_004540b4(DAT_00686bc8,local_8);
  if (cVar2 != '\0') {
    FUN_0041636c(*(undefined4 *)PTR_DAT_00688e9c,&stack0xffffffec);
    FUN_00408678(&local_10,PTR_u__Software_Game_Maker_Scores__00686bcc,unaff_EBX);
    FUN_00452d70(DAT_00686bc8,local_10,1);
    FUN_0041636c(param_1,&stack0xffffffe4);
    FUN_00408678(&stack0xffffffe8,L"Rank",unaff_EDI);
    cVar2 = FUN_00453d28(DAT_00686bc8,unaff_ESI);
    if (cVar2 != '\0') {
      FUN_0041636c(param_1,&local_28);
      FUN_00408678(&local_24,L"Rank",local_28);
      FUN_004537a0(DAT_00686bc8,local_24,&local_20);
      FUN_005a0740(local_20,param_2,0);
    }
    FUN_00452bf8(DAT_00686bc8);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a0a22;
  local_24 = (undefined1 *)0x5a0a1a;
  thunk_FUN_004072fc(&local_28,9,puVar1);
  return;
}
