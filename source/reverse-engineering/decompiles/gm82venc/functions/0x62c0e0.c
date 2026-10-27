// rea decompile_all
// name: FUN_0062c0e0
// address: 0x62c0e0
// body: available
// range: 0x62c0e0-0x62c1f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62c0fd (push 0x62c1f5 followed by fs-segment stack chaining); handler 0x62c1f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062c0e0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = &LAB_0062c1f5;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = 0x62c105;
  cVar2 = FUN_0062b1d4();
  if (cVar2 != '\0') {
    local_20 = 0x62c112;
    iVar4 = FUN_0062b56c();
    if (0 < iVar4) {
      local_20 = 0x62c11f;
      uVar3 = FUN_0062b56c();
      local_20 = 0x62c127;
      FUN_0041636c(uVar3,&local_c);
      local_20 = local_c;
      local_24 = &DAT_0062c210;
      local_28 = (undefined1 *)0x62c141;
      FUN_0041636c(param_1 / 60000,&stack0xfffffff0);
      local_2c = &DAT_0062c210;
      local_28 = unaff_EBX;
      FUN_0041636c((param_1 % 60000) / 1000,&local_14);
      puStack_30 = local_14;
      FUN_0040875c(&local_8,5);
      FUN_0062b00c(L"set cdaudio time format tmsf wait",&local_18);
      cVar2 = FUN_0062b37c();
      if (cVar2 == '\0') {
        FUN_00408678(&local_28,L"seek cdaudio to ",local_8);
        uVar3 = FUN_00408220(local_28);
        FUN_0062b00c(uVar3,&local_24);
      }
      else {
        FUN_00408678(&local_20,L"play cdaudio from ",local_8);
        uVar3 = FUN_00408220(local_20);
        FUN_0062b00c(uVar3,&local_1c);
      }
      FUN_0062b00c(L"set cdaudio time format tmsf",&local_2c);
    }
  }
  puVar1 = local_28;
  *in_FS_OFFSET = puStack_30;
  local_28 = &LAB_0062c1fc;
  local_2c = (undefined *)0x62c1f4;
  thunk_FUN_004072fc(&local_2c,10,puVar1);
  return;
}
