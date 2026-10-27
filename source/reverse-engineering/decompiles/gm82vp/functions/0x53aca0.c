// rea decompile_all
// name: FUN_0053aca0
// address: 0x53aca0
// body: available
// range: 0x53aca0-0x53ae24 inclusive
// range: 0x53ae3d-0x53ae8d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53acc0 (push 0x53ae8e followed by fs-segment stack chaining); handler 0x53ae8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53ae13 (push 0x53ae25 followed by fs-segment stack chaining); handler 0x53ae25 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053aca0(undefined4 *param_1,int param_2,DWORD param_3,DWORD param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  LPCWSTR pWVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  HANDLE local_14;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  puStack_30 = &LAB_0053ae8e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *param_1 = 0;
  bVar2 = FUN_0053f6cc();
  if ((bVar2 < 10) && ((param_2 == 0 || (iVar3 = FUN_00408d44(&LAB_0053aeb0,param_2), 0 < iVar3))))
  {
    FUN_0041bf50(&LAB_0053a5f0,1,PTR_LAB_0068885c);
    FUN_00406ab4();
  }
  FUN_0053ac48(&local_8);
  puVar6 = DAT_006848fc;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      pWVar4 = (LPCWSTR)FUN_00408220(param_2);
      local_14 = OpenFileMappingW(param_4,0,pWVar4);
      if (local_14 == (HANDLE)0x0) {
        if (param_3 == 0) {
          FUN_0041bf50(&LAB_0053a5f0,1,PTR_LAB_00688af8);
          FUN_00406ab4();
        }
        DVar7 = 4;
        if ((*(int *)PTR_DAT_0068966c == 1) && (param_4 == 1)) {
          DVar7 = 8;
        }
        pWVar4 = (LPCWSTR)FUN_00408220(param_2);
        local_14 = CreateFileMappingW((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,DVar7,0,param_3,
                                      pWVar4);
      }
      DVar7 = GetLastError();
      if ((DVar7 != 0xb7) && (local_14 == (HANDLE)0x0)) {
        FUN_0041ebf4();
      }
      pvVar5 = MapViewOfFile(local_14,param_4,0,0,param_3);
      *param_1 = pvVar5;
      if (pvVar5 == (LPVOID)0x0) {
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffc0;
        FUN_0041ebf4();
        *in_FS_OFFSET = uVar8;
      }
      puVar6 = (undefined4 *)FUN_004095b8(0x14,&DAT_0053abc0);
      FUN_00408194(puVar6 + 3,param_2);
      puVar6[2] = local_14;
      puVar6[1] = *param_1;
      puVar6[4] = 1;
      *puVar6 = DAT_006848fc;
      DAT_006848fc = puVar6;
LAB_0053ae78:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0053ae95;
      puStack_30 = (undefined1 *)0x53ae8d;
      FUN_0040b268(&local_8,uStack_34,puVar1);
      return;
    }
    iVar3 = FUN_00415770(puVar6[3],param_2);
    if (iVar3 == 0) {
      puVar6[4] = puVar6[4] + 1;
      *param_1 = puVar6[1];
      goto LAB_0053ae78;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}
