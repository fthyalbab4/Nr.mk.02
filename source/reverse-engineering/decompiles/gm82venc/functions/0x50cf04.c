// rea decompile_all
// name: FUN_0050cf04
// address: 0x50cf04
// body: available
// range: 0x50cf04-0x50d0a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50cf4e (push 0x50d0aa followed by fs-segment stack chaining); handler 0x50d0aa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050cf04(undefined4 param_1)

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
  undefined4 local_8;

  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  puStack_290 = (undefined1 *)0x50cf32;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_290 = (undefined1 *)0x50cf43;
  FUN_00408ff8(local_27c,&DAT_00410798);
  puStack_294 = &LAB_0050d0aa;
  uStack_298 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_298;
  puStack_290 = &stack0xfffffffc;
  cVar2 = FUN_00416b54(local_8);
  if (cVar2 != '\0') {
    FUN_00408678(&local_280,local_8,L"\\*.*");
    iVar3 = FUN_00416d4c(local_280,0x10,local_27c);
    if (iVar3 == 0) {
      do {
        uStack_298 = local_268;
        FUN_0040875c(&local_284,3);
        cVar2 = FUN_00416b54(local_284);
        bVar4 = cVar2 == '\0';
        if (bVar4) {
          iVar3 = FUN_00408d44(DAT_0068fd60,local_8);
          if (iVar3 == 1) {
            uStack_298 = local_268;
            FUN_0040875c(&local_28c,3);
            lpFileName = (LPCWSTR)FUN_00408220(local_28c);
            DeleteFileW(lpFileName);
          }
        }
        else {
          FUN_0040891c(local_268,&DAT_0050d0ec);
          if (!bVar4) {
            FUN_0040891c(local_268,&DAT_0050d0fc);
            if (!bVar4) {
              uStack_298 = local_268;
              FUN_0040875c(&local_288,3);
              FUN_0050cf04(local_288);
            }
          }
        }
        iVar3 = FUN_00416d9c(local_27c);
      } while (iVar3 == 0);
      FUN_00416dc0(local_27c);
    }
    FUN_004175dc(local_8);
  }
  puVar1 = puStack_290;
  *in_FS_OFFSET = uStack_298;
  puStack_290 = &LAB_0050d0b1;
  puStack_294 = (undefined1 *)0x50d090;
  thunk_FUN_004072fc(&local_28c,4,puVar1);
  puStack_294 = (undefined1 *)0x50d0a1;
  FUN_004090d0(local_27c,&DAT_00410798);
  puStack_294 = (undefined1 *)0x50d0a9;
  thunk_FUN_004072d8(&local_8);
  return;
}
