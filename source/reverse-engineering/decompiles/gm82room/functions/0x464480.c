// rea decompile_all
// name: FUN_00464480
// address: 0x464480
// body: available
// range: 0x464480-0x4645cb inclusive
// range: 0x4645de-0x4645e4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x464586 (push 0x4645cc followed by fs-segment stack chaining); handler 0x4645cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464480(int *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  HDC hdc;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_7c;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined2 local_3d;
  ushort local_3b;
  undefined4 local_39;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  char local_d;
  HPALETTE local_c;
  int *local_8;

  bVar7 = 0;
  local_8 = param_1;
  bVar2 = FUN_00463224(param_1);
  if (param_2 != bVar2) {
    if (param_2 == 0) {
      (**(code **)(*local_8 + 0x78))(local_8,1);
    }
    else {
      if (param_2 != 8) {
        FUN_00404f38(&local_61,0x54,0);
        iVar1 = local_8[10];
        puVar5 = (undefined4 *)(iVar1 + 0x18);
        puVar6 = &local_61;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        local_d = '\0';
        local_4d = 0;
        local_49 = 0x28;
        local_45 = local_5d;
        local_41 = local_59;
        local_3d = 1;
        local_3b = (ushort)(byte)(&DAT_0067d57f)[param_2];
        local_c = *(HPALETTE *)(iVar1 + 0x10);
        if (param_2 == 2) {
          local_c = DAT_0068f104;
        }
        else if (param_2 == 3) {
          GetDC((HWND)0x0);
          hdc = (HDC)FUN_0045d8c4();
          local_c = CreateHalftonePalette(hdc);
          local_d = '\x01';
          uStack_7c = 0x46455d;
          ReleaseDC((HWND)0x0,hdc);
        }
        else if (param_2 == 5) {
          local_39 = 3;
          local_21 = 0xf800;
          local_1d = 0x7e0;
          local_19 = 0x1f;
        }
        uStack_7c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_7c;
        puVar5 = &local_61;
        uVar3 = (**(code **)(*local_8 + 0x70))();
        FUN_004629c8(local_8,uVar3,local_c,puVar5);
        *(bool *)((int)local_8 + 0x22) = local_c != (HPALETTE)0x0;
        *in_FS_OFFSET = uStack_7c;
        if (local_d != '\0') {
          uStack_7c = 0x4645cb;
          DeleteObject(local_c);
        }
        return;
      }
      FUN_0045d78c(PTR_LAB_00688c8c);
    }
  }
  return;
}
