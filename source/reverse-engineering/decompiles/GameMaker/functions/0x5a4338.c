// rea decompile_all
// name: FUN_005a4338
// address: 0x5a4338
// body: available
// range: 0x5a4338-0x5a4456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a4364 (push 0x5a4457 followed by fs-segment stack chaining); handler 0x5a4457 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a4338(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  LPVOID *ppv;
  HRESULT HVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined4 local_268 [149];
  undefined4 *local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;

  puStack_274 = &stack0xfffffffc;
  local_268[0] = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_278 = &LAB_005a4457;
  uStack_27c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_27c;
  local_14 = param_3;
  local_10 = param_1;
  ppv = (LPVOID *)FUN_0040b140(&local_8);
  HVar3 = CoCreateInstance((IID *)PTR_DAT_00781f28,(LPUNKNOWN)0x0,1,(IID *)PTR_DAT_007827b0,ppv);
  if (HVar3 == 0) {
    uVar4 = FUN_0040b140(&local_c);
    cVar2 = FUN_0041ef90(local_8,&DAT_0077cfc0,uVar4);
    if (cVar2 != '\0') {
      FUN_00407f44(param_2);
      iVar5 = (**(code **)(*local_c + 0x14))();
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*local_8 + 0x4c))();
        if (iVar5 == 0) {
          FUN_00408244(local_14,0x104);
          FUN_00407f44(*local_14);
          iVar5 = (**(code **)(*local_8 + 0xc))();
          if (iVar5 == 0) {
            FUN_00415dd0(*local_14,local_268);
            FUN_00407eb8(local_14,local_268[0]);
          }
        }
      }
    }
  }
  puVar1 = puStack_274;
  *in_FS_OFFSET = uStack_27c;
  puStack_274 = &LAB_005a445e;
  puStack_278 = (undefined1 *)0x5a4446;
  thunk_FUN_00406e5c(local_268,uStack_27c,puVar1);
  puStack_278 = (undefined1 *)0x5a444e;
  FUN_0040b140(&local_c);
  puStack_278 = (undefined1 *)0x5a4456;
  FUN_0040b140(&local_8);
  return;
}
