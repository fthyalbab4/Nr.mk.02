// rea decompile_all
// name: FUN_00738844
// address: 0x738844
// body: available
// range: 0x738844-0x7389c8 inclusive
// range: 0x7389e1-0x738a31 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x738864 (push 0x738a32 followed by fs-segment stack chaining); handler 0x738a32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7389b7 (push 0x7389c9 followed by fs-segment stack chaining); handler 0x7389c9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00738844(undefined4 *param_1,int param_2,DWORD param_3,DWORD param_4)

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
  puStack_30 = &LAB_00738a32;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *param_1 = 0;
  bVar2 = FUN_0073ce4c();
  if ((bVar2 < 10) && ((param_2 == 0 || (iVar3 = FUN_00408a68(&LAB_00738a54,param_2), 0 < iVar3))))
  {
    FUN_0041c0bc(&PTR_LAB_00738194,1,PTR_PTR_00781564);
    FUN_00406618();
  }
  FUN_007387ec(&local_8);
  puVar6 = DAT_0077fa74;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      pWVar4 = (LPCWSTR)FUN_00407f44(param_2);
      local_14 = OpenFileMappingW(param_4,0,pWVar4);
      if (local_14 == (HANDLE)0x0) {
        if (param_3 == 0) {
          FUN_0041c0bc(&PTR_LAB_00738194,1,PTR_PTR_00781940);
          FUN_00406618();
        }
        DVar7 = 4;
        if ((*(int *)PTR_DAT_00782944 == 1) && (param_4 == 1)) {
          DVar7 = 8;
        }
        pWVar4 = (LPCWSTR)FUN_00407f44(param_2);
        local_14 = CreateFileMappingW((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,DVar7,0,param_3,
                                      pWVar4);
      }
      DVar7 = GetLastError();
      if ((DVar7 != 0xb7) && (local_14 == (HANDLE)0x0)) {
        FUN_0041e9c8();
      }
      pvVar5 = MapViewOfFile(local_14,param_4,0,0,param_3);
      *param_1 = pvVar5;
      if (pvVar5 == (LPVOID)0x0) {
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffc0;
        FUN_0041e9c8();
        *in_FS_OFFSET = uVar8;
      }
      puVar6 = (undefined4 *)FUN_004092dc(0x14,&DAT_00738764);
      FUN_00407eb8(puVar6 + 3,param_2);
      puVar6[2] = local_14;
      puVar6[1] = *param_1;
      puVar6[4] = 1;
      *puVar6 = DAT_0077fa74;
      DAT_0077fa74 = puVar6;
LAB_00738a1c:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00738a39;
      puStack_30 = (undefined1 *)0x738a31;
      FUN_0040b140(&local_8,uStack_34,puVar1);
      return;
    }
    iVar3 = FUN_00415924(puVar6[3],param_2);
    if (iVar3 == 0) {
      puVar6[4] = puVar6[4] + 1;
      *param_1 = puVar6[1];
      goto LAB_00738a1c;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}
