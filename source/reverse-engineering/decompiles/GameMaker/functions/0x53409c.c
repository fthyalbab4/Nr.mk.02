// rea decompile_all
// name: FUN_0053409c
// address: 0x53409c
// body: available
// range: 0x53409c-0x534252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5340f1 (push 0x534253 followed by fs-segment stack chaining); handler 0x534253 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053409c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_298;
  undefined1 *puStack_294;
  undefined1 *puStack_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c [20];
  undefined4 local_268;
  undefined4 local_c;
  undefined4 local_8;

  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  puStack_290 = (undefined1 *)0x5340cd;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_290 = (undefined1 *)0x5340d5;
  thunk_FUN_00407660(local_c);
  puStack_290 = (undefined1 *)0x5340e6;
  FUN_00408d1c(local_27c,&DAT_00410938);
  puStack_294 = &LAB_00534253;
  uStack_298 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_298;
  puStack_290 = &stack0xfffffffc;
  cVar2 = FUN_00416e88(local_c);
  if (cVar2 != '\0') {
    FUN_0040839c(&local_280,local_c,L"\\*.*");
    iVar3 = FUN_00417080(local_280,0x10,local_27c);
    if (iVar3 == 0) {
      do {
        uStack_298 = local_268;
        FUN_00408480(&local_284,3);
        cVar2 = FUN_00416e88(local_284);
        bVar4 = cVar2 == '\0';
        if (bVar4) {
          iVar3 = FUN_00408a68(local_8,local_c);
          if (iVar3 == 1) {
            uStack_298 = local_268;
            FUN_00408480(&local_28c,3);
            lpFileName = (LPCWSTR)FUN_00407f44(local_28c);
            DeleteFileW(lpFileName);
          }
        }
        else {
          FUN_00408640(local_268,&DAT_00534294);
          if (!bVar4) {
            FUN_00408640(local_268,&LAB_005342a4);
            if (!bVar4) {
              uStack_298 = local_268;
              FUN_00408480(&local_288,3);
              FUN_0053409c(local_8,local_288);
            }
          }
        }
        iVar3 = FUN_004170d0(local_27c);
      } while (iVar3 == 0);
      FUN_004170f4(local_27c);
    }
    FUN_00417628(local_c);
  }
  puVar1 = puStack_290;
  *in_FS_OFFSET = uStack_298;
  puStack_290 = &LAB_0053425a;
  puStack_294 = (undefined1 *)0x534234;
  thunk_FUN_00406e80(&local_28c,4,puVar1);
  puStack_294 = (undefined1 *)0x534245;
  FUN_00408df4(local_27c,&DAT_00410938);
  puStack_294 = (undefined1 *)0x534252;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
