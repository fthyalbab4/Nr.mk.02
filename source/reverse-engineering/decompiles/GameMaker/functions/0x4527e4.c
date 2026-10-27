// rea decompile_all
// name: FUN_004527e4
// address: 0x4527e4
// body: available
// range: 0x4527e4-0x4529a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x452801 (push 0x4529a7 followed by fs-segment stack chaining); handler 0x4529a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004527e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  LPCWSTR pWVar3;
  HKEY pHVar4;
  LSTATUS LVar5;
  byte bVar6;
  uint uVar7;
  DWORD *in_FS_OFFSET;
  DWORD ulOptions;
  HKEY *ppHVar8;
  undefined4 uVar9;
  DWORD DStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  HKEY local_10;
  char local_9;
  DWORD local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_004529a7;
  DStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_28;
  FUN_00407f0c(&local_8,param_2);
  uVar1 = FUN_00452264(local_8);
  bVar6 = (byte)uVar1;
  if (bVar6 == 0) {
    FUN_00408778(&local_8,1,1);
  }
  local_10 = (HKEY)0x0;
  uVar7 = *(uint *)(param_1 + 0x18) & 0x300;
  ppHVar8 = &local_10;
  puVar2 = (undefined *)(uVar7 | 0x20019);
  ulOptions = 0;
  pWVar3 = (LPCWSTR)FUN_00407f44(local_8);
  pHVar4 = (HKEY)FUN_004525b8(param_1,uVar1);
  LVar5 = RegOpenKeyExW(pHVar4,pWVar3,ulOptions,(REGSAM)puVar2,ppHVar8);
  uVar9 = 0x45286b;
  local_9 = FUN_0045252c(param_1,LVar5);
  if (local_9 == '\0') {
    ppHVar8 = &local_10;
    puVar2 = (undefined *)(uVar7 | 0x20009);
    ulOptions = 0;
    pWVar3 = (LPCWSTR)FUN_00407f44(local_8);
    pHVar4 = (HKEY)FUN_004525b8(param_1,uVar1);
    LVar5 = RegOpenKeyExW(pHVar4,pWVar3,ulOptions,(REGSAM)puVar2,ppHVar8);
    uVar9 = 0x4528e1;
    local_9 = FUN_0045252c(param_1,LVar5);
    if (local_9 == '\0') {
      ppHVar8 = &local_10;
      puVar2 = (undefined *)(uVar7 | 1);
      ulOptions = 0;
      pWVar3 = (LPCWSTR)FUN_00407f44(local_8);
      pHVar4 = (HKEY)FUN_004525b8(param_1,uVar1);
      LVar5 = RegOpenKeyExW(pHVar4,pWVar3,ulOptions,(REGSAM)puVar2,ppHVar8);
      uVar9 = 0x452952;
      local_9 = FUN_0045252c(param_1,LVar5);
      if (local_9 != '\0') {
        *(uint *)(param_1 + 0x18) = uVar7 | 1;
        if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
          uVar9 = *(undefined4 *)(param_1 + 0x10);
          puVar2 = &DAT_004529c8;
          ulOptions = local_8;
          FUN_00408480(&local_8,3);
        }
        FUN_00452594(param_1,local_10,local_8,ulOptions,puVar2);
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar7 | 0x20009;
      if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x10);
        puVar2 = &DAT_004529c8;
        ulOptions = local_8;
        FUN_00408480(&local_8,3);
      }
      FUN_00452594(param_1,local_10,local_8,ulOptions,puVar2);
    }
  }
  else {
    *(uint *)(param_1 + 0x18) = uVar7 | 0x20019;
    if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      puVar2 = &DAT_004529c8;
      ulOptions = local_8;
      FUN_00408480(&local_8,3);
    }
    FUN_00452594(param_1,local_10,local_8,ulOptions,puVar2);
  }
  *in_FS_OFFSET = ulOptions;
  thunk_FUN_00406e5c(&local_8,ulOptions,uVar9,&LAB_004529ae);
  return;
}
