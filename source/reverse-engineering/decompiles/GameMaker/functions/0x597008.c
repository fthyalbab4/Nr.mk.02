// rea decompile_all
// name: FUN_00597008
// address: 0x597008
// body: available
// range: 0x597008-0x5973b9 inclusive
// range: 0x5973ea-0x597879 inclusive
// range: 0x5978aa-0x5978d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x597045 (push 0x5978d8 followed by fs-segment stack chaining); handler 0x5978d8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x597353 (push 0x5973e3 followed by fs-segment stack chaining); handler 0x5973e3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x597386 (push 0x5973ba followed by fs-segment stack chaining); handler 0x5973ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59747e (push 0x59787a followed by fs-segment stack chaining); handler 0x59787a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597008(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int *in_FS_OFFSET;
  byte bVar12;
  int aiStackY_18ac [1489];
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
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

  bVar12 = 0;
  puStack_108 = &stack0xfffffffc;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d4 = 0;
  puStack_10c = &LAB_005978d8;
  iStack_110 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_110;
  uStack_114 = 0x597055;
  local_a0 = param_2;
  local_9c = param_1;
  FUN_00463a4c(param_1,0);
  uStack_114 = 0x597060;
  iVar6 = FUN_0043f234(local_a0);
  local_9c[0x2b] = iVar6;
  uStack_114 = 0x597082;
  cVar5 = (**(code **)(*local_9c + 0x84))(local_9c,local_a0,0);
  puVar4 = puStack_108;
  if (cVar5 == '\0') {
    *in_FS_OFFSET = iStack_110;
    puStack_108 = &LAB_005978df;
    puStack_10c = (undefined1 *)0x5978c7;
    thunk_FUN_00406e80(&local_e8,2,puVar4);
    puStack_10c = (undefined1 *)0x5978d7;
    thunk_FUN_00406e80(&local_d8,2);
    return;
  }
  piStack_118 = (int *)local_9c[0x2b];
  uStack_114 = 0;
  piStack_11c = (int *)0x5970a5;
  FUN_0043f254(local_a0);
  uStack_114 = 1;
  piStack_118 = &local_d0;
  piStack_11c = (int *)0x5970b9;
  uVar7 = (**(code **)(*local_9c + 0x30))();
  piStack_11c = (int *)0x5970c4;
  FUN_00438c38(0,0,uVar7);
  piVar11 = local_9c + (uint)bVar12 * -2 + 0x2e;
  local_9c[0x2d] = local_d0;
  *piVar11 = aiStack_cc[(uint)bVar12 * -2];
  piVar11[(uint)bVar12 * -2 + 1] = aiStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  (piVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
       (aiStack_cc + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  uStack_114 = 0;
  piStack_118 = (int *)0x0;
  piStack_11c = local_9c + 0x2d;
  uStack_120 = 0x5970fa;
  FUN_0040b75c(PTR_PTR_007819b8,&local_d4);
  uStack_120 = local_d4;
  puStack_124 = (undefined1 *)0x597118;
  FUN_00405d08(local_9c,local_9c,0);
  puStack_124 = (undefined1 *)0x59712b;
  (**(code **)(*local_a0 + 0xc))(local_a0,local_84,0x80);
  puStack_124 = (undefined1 *)0x597135;
  iVar6 = (**(code **)*local_a0)();
  puStack_124 = (undefined1 *)0x597142;
  iVar8 = FUN_0043f234(local_a0);
  iVar6 = iVar6 - iVar8;
  local_b8 = local_9c + 0x11;
  if ((local_84[0] != '\n') && (local_84[0] != -0x33)) {
    puStack_124 = (undefined1 *)0x59716f;
    FUN_0040b75c(PTR_PTR_00781dac,&local_d8);
    local_e0 = L"PCX or SCR";
    local_dc = 0x11;
    puStack_124 = (undefined1 *)0x597196;
    FUN_00592d3c(local_d8,&local_e0,0);
  }
  iVar8 = local_9c[0x10];
  puStack_124 = (undefined1 *)0x5971b0;
  FUN_0058f178(iVar8,(char)local_b8[4]);
  puStack_124 = (undefined1 *)0x5971c1;
  FUN_0058f110(iVar8,*(undefined1 *)((int)local_b8 + 0x11));
  puStack_124 = (undefined1 *)0x5971d2;
  FUN_0058f18c(iVar8,*(undefined1 *)((int)local_b8 + 0x12));
  if ((char)local_b8[4] == '\x01') {
    puStack_124 = (undefined1 *)0x5971e7;
    FUN_0058f25c(iVar8,1);
  }
  else {
    puStack_124 = (undefined1 *)0x5971f2;
    FUN_0058f25c(iVar8,6);
  }
  if (*(char *)((int)local_b8 + 0x13) == '\x02') {
    puStack_124 = (undefined1 *)0x597207;
    FUN_0058f1f4(iVar8,4);
  }
  else {
    puStack_124 = (undefined1 *)0x59721a;
    FUN_0058f1f4(iVar8,*(undefined1 *)((int)local_b8 + 0x11));
  }
  puStack_124 = (undefined1 *)0x59722b;
  FUN_0058f270(iVar8,*(undefined1 *)((int)local_b8 + 0x12));
  puStack_124 = (undefined1 *)0x59723e;
  cVar5 = FUN_0058ed00(local_9c[0x10],1);
  if (cVar5 == '\b') {
    if ((*(char *)((int)local_b8 + 0x12) == '\x04') && (*(char *)((int)local_b8 + 0x13) == '\x04'))
    {
      cVar5 = '\x02';
    }
    else {
      puStack_124 = (undefined1 *)0x597271;
      FUN_0040b75c(PTR_PTR_00781958,&local_e4);
      local_e0 = L"PCX";
      local_dc = 0x11;
      puStack_124 = (undefined1 *)0x597298;
      FUN_00592d3c(local_e4,&local_e0,0);
    }
  }
  puStack_124 = (undefined1 *)0x5972a5;
  FUN_00463dc0(local_9c,cVar5);
  puStack_124 = (undefined1 *)0x5972b0;
  cVar5 = FUN_00462b64(local_9c);
  if (cVar5 == '\x03') {
    iVar6 = iVar6 + -0x301;
  }
  puStack_124 = (undefined1 *)0x5972c5;
  cVar5 = FUN_00462b64(local_9c);
  if (cVar5 != '\x06') {
    puStack_128 = (undefined1 *)0x5972cf;
    puStack_124 = &stack0xfffffffc;
    FUN_00596e18();
  }
  puStack_124 = (undefined1 *)0x5972e4;
  (**(code **)(*local_9c + 0x44))(local_9c,local_b8[2]);
  puStack_124 = (undefined1 *)0x5972f8;
  (**(code **)(*local_9c + 0x38))(local_9c,local_b8[3]);
  local_b4 = (uint)*(byte *)((int)local_b8 + 0x12) * (uint)local_42;
  if ((char)local_b8[5] == '\x02') {
    iVar8 = local_b8[3] * local_b4;
    puStack_124 = (undefined1 *)0x597335;
    local_a8 = (char *)FUN_0040431c(iVar8,0);
    puStack_124 = (undefined1 *)0x597342;
    local_a4 = FUN_0040431c(iVar6);
    puStack_128 = &LAB_005973e3;
    piStack_12c = (int *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&piStack_12c;
    puStack_130 = (undefined1 *)0x597369;
    puStack_124 = &stack0xfffffffc;
    FUN_0043f488(local_a0,local_a4,iVar6);
    puStack_130 = (undefined1 *)0x597375;
    local_bc = (undefined4 *)FUN_00405a4c(&PTR_FUN_0059fbec,1);
    puStack_134 = &LAB_005973ba;
    puStack_138 = (undefined1 *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&puStack_138;
    puStack_144 = (undefined1 *)0x5973a1;
    iStack_140 = iVar8;
    piStack_13c = (int *)iVar6;
    puStack_130 = &stack0xfffffffc;
    (**(code **)*local_bc)(local_bc,&local_a4,&local_a8);
    puVar4 = puStack_138;
    *in_FS_OFFSET = iStack_140;
    puStack_138 = &LAB_005973c1;
    piStack_13c = (int *)0x5973b9;
    FUN_00405a7c(local_bc,iStack_140,puVar4);
    return;
  }
  puStack_124 = (undefined1 *)0x5973f1;
  local_a8 = (char *)FUN_0040431c(iVar6,0);
  puStack_124 = (undefined1 *)0x59740a;
  FUN_0043f488(local_a0,local_a8,iVar6);
  puStack_124 = (undefined1 *)0x0;
  puStack_128 = (undefined1 *)0x0;
  piStack_12c = local_9c + 0x2d;
  puStack_130 = (undefined1 *)0x0;
  puStack_134 = (undefined1 *)0x597433;
  FUN_00405d08(local_9c,local_9c,2);
  puStack_134 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  piStack_13c = local_9c + 0x2d;
  iStack_140 = 0x597453;
  FUN_0040b75c(PTR_PTR_00782258,&local_e8);
  iStack_140 = local_e8;
  puStack_144 = (undefined1 *)0x597471;
  FUN_00405d08(local_9c,local_9c,0);
  puStack_148 = &LAB_0059787a;
  iStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_14c;
  local_ac = local_a8;
  if ((*(char *)((int)local_b8 + 0x12) == '\x04') && (*(char *)((int)local_b8 + 0x13) == '\x04')) {
    puStack_144 = &stack0xfffffffc;
    if (-1 < local_b8[3] + -1) {
      local_b0 = 0;
      puStack_144 = &stack0xfffffffc;
      aiStack_cc[3] = local_b8[3];
      do {
        local_98 = local_ac;
        uVar9 = local_b4 >> 2;
        local_94 = local_ac + uVar9;
        local_90 = local_ac + uVar9 * 2;
        local_8c = local_ac + uVar9 * 3;
        pbVar10 = (byte *)FUN_00462be8(local_9c,local_b0);
        uVar9 = local_b8[2] * (uint)*(byte *)((int)local_b8 + 0x13) + 7 >> 3;
        bVar12 = 0;
        while (uVar9 != 0) {
          local_85 = 0;
          iVar6 = 2;
          do {
            cVar5 = *local_8c;
            *local_8c = *local_8c << 1;
            cVar1 = *local_90;
            *local_90 = *local_90 << 1;
            cVar2 = *local_94;
            *local_94 = *local_94 << 1;
            cVar3 = *local_98;
            *local_98 = *local_98 << 1;
            local_85 = (((local_85 << 1 | cVar5 < '\0') << 1 | cVar1 < '\0') << 1 | cVar2 < '\0') <<
                       1 | cVar3 < '\0';
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          *pbVar10 = local_85;
          pbVar10 = pbVar10 + 1;
          uVar9 = uVar9 - 1;
          bVar12 = bVar12 + 2 & 7;
          if (bVar12 == 0) {
            local_98 = local_98 + 1;
            local_94 = local_94 + 1;
            local_90 = local_90 + 1;
            local_8c = local_8c + 1;
          }
        }
        local_ac = local_ac + local_b4;
        iVar6 = MulDiv(local_b0,100,local_b8[3]);
        FUN_00405d08(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar6);
        OffsetRect((LPRECT)(local_9c + 0x2d),0,1);
        local_b0 = local_b0 + 1;
        aiStack_cc[3] = aiStack_cc[3] + -1;
      } while (aiStack_cc[3] != 0);
      aiStack_cc[3] = 0;
    }
  }
  else {
    puStack_144 = &stack0xfffffffc;
    cVar5 = FUN_00462b64(local_9c);
    if (cVar5 == '\x06') {
      if (-1 < local_b8[3] + -1) {
        local_b0 = 0;
        aiStack_cc[3] = local_b8[3];
        do {
          uVar7 = FUN_00462be8(local_9c,local_b0);
          local_98 = local_ac;
          local_f0 = local_ac + local_b4 / 3;
          local_ec = local_ac + (local_b4 / 3) * 2;
          local_f4 = local_ac;
          local_94 = local_f0;
          local_90 = local_ec;
          FUN_0058f2d8(local_9c[0x10],&local_f4,2,0xff,local_b8[2],uVar7);
          local_ac = local_ac + local_b4;
          iVar6 = MulDiv(local_b0,100,local_b8[3]);
          FUN_00405d08(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar6);
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
        uVar7 = FUN_00462be8(local_9c,local_b0);
        local_f8 = local_ac;
        FUN_0058f2d8(local_9c[0x10],&local_f8,0,0xff,local_b8[2],uVar7);
        local_ac = local_ac + local_b4;
        iVar6 = MulDiv(local_b0,100,local_b8[3]);
        FUN_00405d08(local_9c,local_9c,1,0,local_9c + 0x2d,1,iVar6);
        OffsetRect((LPRECT)(local_9c + 0x2d),0,1);
        local_b0 = local_b0 + 1;
        aiStack_cc[3] = aiStack_cc[3] + -1;
      } while (aiStack_cc[3] != 0);
    }
  }
  puVar4 = puStack_144;
  *in_FS_OFFSET = iStack_14c;
  puStack_144 = &DAT_00597881;
  if (local_a8 != (char *)0x0) {
    puStack_148 = (undefined1 *)0x597879;
    FUN_00404338(local_a8,iStack_14c,puVar4);
  }
  return;
}
