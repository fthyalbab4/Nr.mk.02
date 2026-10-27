// rea decompile_all
// name: FUN_005dce6c
// address: 0x5dce6c
// body: available
// range: 0x5dce6c-0x5dd21d inclusive
// range: 0x5dd24e-0x5dd6dd inclusive
// range: 0x5dd70e-0x5dd73b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5dcea9 (push 0x5dd73c followed by fs-segment stack chaining); handler 0x5dd73c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5dd1b7 (push 0x5dd247 followed by fs-segment stack chaining); handler 0x5dd247 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5dd1ea (push 0x5dd21e followed by fs-segment stack chaining); handler 0x5dd21e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5dd2e2 (push 0x5dd6de followed by fs-segment stack chaining); handler 0x5dd6de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dce6c(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  int *in_FS_OFFSET;
  byte bVar13;
  int aiStackY_18ac [1489];
  int iStack_14c;
  undefined1 *puStack_148;
  undefined **ppuStack_144;
  int iStack_140;
  int *piStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int *piStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  int *piStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  wchar_t *local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int aiStack_cc [4];
  undefined4 *local_bc;
  int *local_b8;
  uint local_b4;
  int local_b0;
  char *local_ac;
  char *local_a8;
  undefined4 local_a4;
  int *local_a0;
  int *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  byte local_85;
  char local_84 [66];
  ushort local_42;

  bVar13 = 0;
  puStack_108 = &stack0xfffffffc;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d4 = 0;
  puStack_10c = &LAB_005dd73c;
  iStack_110 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_110;
  uStack_114 = 0x5dceb9;
  local_a0 = param_2;
  local_9c = param_1;
  FUN_0046410c(param_1,0);
  uStack_114 = 0x5dcec4;
  iVar7 = FUN_0043c834(local_a0);
  local_9c[0x2b] = iVar7;
  uStack_114 = 0x5dcee6;
  cVar6 = (**(code **)(*local_9c + 0x84))(local_9c,local_a0,0);
  puVar5 = puStack_108;
  if (cVar6 == '\0') {
    *in_FS_OFFSET = iStack_110;
    puStack_108 = &LAB_005dd743;
    puStack_10c = (undefined1 *)0x5dd72b;
    thunk_FUN_004072fc(&local_e8,2,puVar5);
    puStack_10c = (undefined1 *)0x5dd73b;
    thunk_FUN_004072fc(&local_d8,2);
    return;
  }
  piStack_118 = (int *)local_9c[0x2b];
  uStack_114 = 0;
  piStack_11c = (int *)0x5dcf09;
  FUN_0043c854(local_a0);
  uStack_114 = 1;
  piStack_118 = &local_d0;
  piStack_11c = (int *)0x5dcf1d;
  uVar8 = (**(code **)(*local_9c + 0x30))();
  piStack_11c = (int *)0x5dcf28;
  FUN_00436ad0(0,0,uVar8);
  piVar12 = local_9c + (uint)bVar13 * -2 + 0x2e;
  local_9c[0x2d] = local_d0;
  *piVar12 = aiStack_cc[(uint)bVar13 * -2];
  piVar12[(uint)bVar13 * -2 + 1] = aiStack_cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  (piVar12 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1] =
       (aiStack_cc + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
  uStack_114 = 0;
  piStack_118 = (int *)0x0;
  piStack_11c = local_9c + 0x2d;
  uStack_120 = 0x5dcf5e;
  FUN_0040b9d0(PTR_LAB_00688b34,&local_d4);
  uStack_120 = local_d4;
  puStack_124 = (undefined1 *)0x5dcf7c;
  FUN_00406268(local_9c,local_9c,0);
  puStack_124 = (undefined1 *)0x5dcf8f;
  (**(code **)(*local_a0 + 0xc))(local_a0,local_84,0x80);
  puStack_124 = (undefined1 *)0x5dcf99;
  iVar7 = (**(code **)*local_a0)();
  puStack_124 = (undefined1 *)0x5dcfa6;
  iVar9 = FUN_0043c834(local_a0);
  iVar7 = iVar7 - iVar9;
  local_b8 = local_9c + 0x11;
  if ((local_84[0] != '\n') && (local_84[0] != -0x33)) {
    puStack_124 = (undefined1 *)0x5dcfd3;
    FUN_0040b9d0(PTR_LAB_00688df8,&local_d8);
    local_e0 = L"PCX or SCR";
    local_dc = 0x11;
    puStack_124 = (undefined1 *)0x5dcffa;
    FUN_005d8ba0(local_d8,&local_e0,0);
  }
  iVar9 = local_9c[0x10];
  puStack_124 = (undefined1 *)0x5dd014;
  FUN_005d4fdc(iVar9,(char)local_b8[4]);
  puStack_124 = (undefined1 *)0x5dd025;
  FUN_005d4f74(iVar9,*(undefined1 *)((int)local_b8 + 0x11));
  puStack_124 = (undefined1 *)0x5dd036;
  FUN_005d4ff0(iVar9,*(undefined1 *)((int)local_b8 + 0x12));
  if ((char)local_b8[4] == '\x01') {
    puStack_124 = (undefined1 *)0x5dd04b;
    FUN_005d50c0(iVar9,1);
  }
  else {
    puStack_124 = (undefined1 *)0x5dd056;
    FUN_005d50c0(iVar9,6);
  }
  if (*(char *)((int)local_b8 + 0x13) == '\x02') {
    puStack_124 = (undefined1 *)0x5dd06b;
    FUN_005d5058(iVar9,4);
  }
  else {
    puStack_124 = (undefined1 *)0x5dd07e;
    FUN_005d5058(iVar9,*(undefined1 *)((int)local_b8 + 0x11));
  }
  puStack_124 = (undefined1 *)0x5dd08f;
  FUN_005d50d4(iVar9,*(undefined1 *)((int)local_b8 + 0x12));
  puStack_124 = (undefined1 *)0x5dd0a2;
  cVar6 = FUN_005d4b64(local_9c[0x10],1);
  if (cVar6 == '\b') {
    if ((*(char *)((int)local_b8 + 0x12) == '\x04') && (*(char *)((int)local_b8 + 0x13) == '\x04'))
    {
      cVar6 = '\x02';
    }
    else {
      puStack_124 = (undefined1 *)0x5dd0d5;
      FUN_0040b9d0(PTR_LAB_00688b00,&local_e4);
      local_e0 = L"PCX";
      local_dc = 0x11;
      puStack_124 = (undefined1 *)0x5dd0fc;
      FUN_005d8ba0(local_e4,&local_e0,0);
    }
  }
  puStack_124 = (undefined1 *)0x5dd109;
  FUN_00464480(local_9c,cVar6);
  puStack_124 = (undefined1 *)0x5dd114;
  cVar6 = FUN_00463224(local_9c);
  if (cVar6 == '\x03') {
    iVar7 = iVar7 + -0x301;
  }
  puStack_124 = (undefined1 *)0x5dd129;
  cVar6 = FUN_00463224(local_9c);
  if (cVar6 != '\x06') {
    puStack_128 = (undefined1 *)0x5dd133;
    puStack_124 = &stack0xfffffffc;
    FUN_005dcc7c();
  }
  puStack_124 = (undefined1 *)0x5dd148;
  (**(code **)(*local_9c + 0x44))(local_9c,local_b8[2]);
  puStack_124 = (undefined1 *)0x5dd15c;
  (**(code **)(*local_9c + 0x38))(local_9c,local_b8[3]);
  local_b4 = (uint)*(byte *)((int)local_b8 + 0x12) * (uint)local_42;
  if ((char)local_b8[5] == '\x02') {
    iVar9 = local_b8[3] * local_b4;
    puStack_124 = (undefined1 *)0x5dd199;
    local_a8 = (char *)FUN_00404324(iVar9,0);
    puStack_124 = (undefined1 *)0x5dd1a6;
    local_a4 = FUN_00404324(iVar7);
    puStack_128 = &LAB_005dd247;
    piStack_12c = (int *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&piStack_12c;
    puStack_130 = (undefined1 *)0x5dd1cd;
    puStack_124 = &stack0xfffffffc;
    FUN_0043ca88(local_a0,local_a4,iVar7);
    puStack_130 = (undefined1 *)0x5dd1d9;
    local_bc = (undefined4 *)FUN_00405fac(&PTR_FUN_005e5a50,1);
    puStack_134 = &LAB_005dd21e;
    puStack_138 = (undefined1 *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&puStack_138;
    ppuStack_144 = (undefined **)0x5dd205;
    iStack_140 = iVar9;
    piStack_13c = (int *)iVar7;
    puStack_130 = &stack0xfffffffc;
    (**(code **)*local_bc)(local_bc,&local_a4,&local_a8);
    puVar5 = puStack_138;
    *in_FS_OFFSET = iStack_140;
    puStack_138 = &LAB_005dd225;
    piStack_13c = (int *)0x5dd21d;
    FUN_00405fdc(local_bc,iStack_140,puVar5);
    return;
  }
  puStack_124 = (undefined1 *)0x5dd255;
  local_a8 = (char *)FUN_00404324(iVar7,0);
  puStack_124 = (undefined1 *)0x5dd26e;
  FUN_0043ca88(local_a0,local_a8,iVar7);
  puStack_124 = (undefined1 *)0x0;
  puStack_128 = (undefined1 *)0x0;
  piStack_12c = local_9c + 0x2d;
  puStack_130 = (undefined1 *)0x0;
  puStack_134 = (undefined1 *)0x5dd297;
  FUN_00406268(local_9c,local_9c,2);
  puStack_134 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  piStack_13c = local_9c + 0x2d;
  iStack_140 = 0x5dd2b7;
  FUN_0040b9d0(PTR_LAB_0068914c,&local_e8);
  iStack_140 = local_e8;
  ppuStack_144 = (undefined **)0x5dd2d5;
  FUN_00406268(local_9c,local_9c,0);
  puStack_148 = &LAB_005dd6de;
  iStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_14c;
  local_ac = local_a8;
  if ((*(char *)((int)local_b8 + 0x12) == '\x04') && (*(char *)((int)local_b8 + 0x13) == '\x04')) {
    ppuStack_144 = (undefined **)&stack0xfffffffc;
    if (-1 < local_b8[3] + -1) {
      local_b0 = 0;
      ppuStack_144 = (undefined **)&stack0xfffffffc;
      aiStack_cc[3] = local_b8[3];
      do {
        local_98 = local_ac;
        uVar10 = local_b4 >> 2;
        local_94 = local_ac + uVar10;
        local_90 = local_ac + uVar10 * 2;
        local_8c = local_ac + uVar10 * 3;
        pbVar11 = (byte *)FUN_004632a8(local_9c,local_b0);
        uVar10 = local_b8[2] * (uint)*(byte *)((int)local_b8 + 0x13) + 7 >> 3;
        bVar13 = 0;
        while (uVar10 != 0) {
          local_85 = 0;
          iVar7 = 2;
          do {
            cVar6 = *local_8c;
            *local_8c = *local_8c << 1;
            cVar1 = *local_90;
            *local_90 = *local_90 << 1;
            cVar2 = *local_94;
            *local_94 = *local_94 << 1;
            cVar3 = *local_98;
            *local_98 = *local_98 << 1;
            local_85 = (((local_85 << 1 | cVar6 < '\0') << 1 | cVar1 < '\0') << 1 | cVar2 < '\0') <<
                       1 | cVar3 < '\0';
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *pbVar11 = local_85;
          pbVar11 = pbVar11 + 1;
          uVar10 = uVar10 - 1;
          bVar13 = bVar13 + 2 & 7;
          if (bVar13 == 0) {
            local_98 = local_98 + 1;
            local_94 = local_94 + 1;
            local_90 = local_90 + 1;
            local_8c = local_8c + 1;
          }
        }
        local_ac = local_ac + local_b4;
        iVar7 = MulDiv(local_b0,100,local_b8[3]);
        FUN_00406268(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar7);
        OffsetRect((LPRECT)(local_9c + 0x2d),0,1);
        local_b0 = local_b0 + 1;
        aiStack_cc[3] = aiStack_cc[3] + -1;
      } while (aiStack_cc[3] != 0);
      aiStack_cc[3] = 0;
    }
  }
  else {
    ppuStack_144 = (undefined **)&stack0xfffffffc;
    cVar6 = FUN_00463224(local_9c);
    if (cVar6 == '\x06') {
      if (-1 < local_b8[3] + -1) {
        local_b0 = 0;
        aiStack_cc[3] = local_b8[3];
        do {
          uVar8 = FUN_004632a8(local_9c,local_b0);
          local_98 = local_ac;
          local_f0 = local_ac + local_b4 / 3;
          local_ec = local_ac + (local_b4 / 3) * 2;
          local_f4 = local_ac;
          local_94 = local_f0;
          local_90 = local_ec;
          FUN_005d513c(local_9c[0x10],&local_f4,2,0xff,local_b8[2],uVar8);
          local_ac = local_ac + local_b4;
          iVar7 = MulDiv(local_b0,100,local_b8[3]);
          FUN_00406268(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar7);
          OffsetRect((LPRECT)(local_9c + 0x2d),0,1);
          local_b0 = local_b0 + 1;
          aiStack_cc[3] = aiStack_cc[3] + -1;
        } while (aiStack_cc[3] != 0);
        aiStack_cc[3] = 0;
      }
    }
    else if (-1 < local_b8[3] + -1) {
      local_b0 = 0;
      aiStack_cc[3] = local_b8[3];
      do {
        uVar8 = FUN_004632a8(local_9c,local_b0);
        local_f8 = local_ac;
        FUN_005d513c(local_9c[0x10],&local_f8,0,0xff,local_b8[2],uVar8);
        local_ac = local_ac + local_b4;
        iVar7 = MulDiv(local_b0,100,local_b8[3]);
        FUN_00406268(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar7);
        OffsetRect((LPRECT)(local_9c + 0x2d),0,1);
        local_b0 = local_b0 + 1;
        aiStack_cc[3] = aiStack_cc[3] + -1;
      } while (aiStack_cc[3] != 0);
    }
  }
  ppuVar4 = ppuStack_144;
  *in_FS_OFFSET = iStack_14c;
  ppuStack_144 = &PTR_DAT_005dd6e5;
  if (local_a8 != (char *)0x0) {
    puStack_148 = (undefined1 *)0x5dd6dd;
    FUN_00404340(local_a8,iStack_14c,ppuVar4);
  }
  return;
}
