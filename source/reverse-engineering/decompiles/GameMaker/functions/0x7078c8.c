// rea decompile_all
// name: FUN_007078c8
// address: 0x7078c8
// body: available
// range: 0x7078c8-0x70847e inclusive
// range: 0x708491-0x70861f inclusive
// range: 0x70862a-0x708712 inclusive
// range: 0x70871d-0x7088a0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7078ec (push 0x7088a1 followed by fs-segment stack chaining); handler 0x7088a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7083fa (push 0x70847f followed by fs-segment stack chaining); handler 0x70847f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x708585 (push 0x708620 followed by fs-segment stack chaining); handler 0x708620 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x708678 (push 0x708713 followed by fs-segment stack chaining); handler 0x708713 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007078c8(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_8;

  puVar1 = PTR_DAT_00781a90;
  local_20 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  iVar6 = 5;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_24 = &LAB_007088a1;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_004aa460(DAT_00790808[0x10c],*PTR_DAT_0078258c);
  FUN_004aa460(DAT_00790808[0xfc],*PTR_DAT_0078258c);
  FUN_004ee5c0(DAT_00790808[0x118],*PTR_DAT_0078258c);
  FUN_004ee5c0(DAT_00790808[0x130],*PTR_DAT_0078258c);
  (**(code **)(*(int *)DAT_00790808[0xe7] + 0xf0))((int *)DAT_00790808[0xe7],*PTR_DAT_00782598);
  (**(code **)(*(int *)DAT_00790808[300] + 0xf0))((int *)DAT_00790808[300],*PTR_DAT_007820bc);
  if (*(int *)puVar1 < 1) {
    FUN_00530760(DAT_00790808[0x122],100);
  }
  else {
    FUN_00530760(DAT_00790808[0x122],*(undefined4 *)puVar1);
  }
  (**(code **)(*(int *)DAT_00790808[0x121] + 0xf0))((int *)DAT_00790808[0x121],0 < *(int *)puVar1);
  (**(code **)(*(int *)DAT_00790808[0x123] + 0xf0))((int *)DAT_00790808[0x123],*(int *)puVar1 < 0);
  (**(code **)(*(int *)DAT_00790808[0x124] + 0xf0))((int *)DAT_00790808[0x124],*(int *)puVar1 == 0);
  FUN_0045bc24(*(undefined4 *)(DAT_00790808[0x126] + 0x1b4),*(undefined4 *)PTR_DAT_00782508);
  (**(code **)(*(int *)DAT_00790808[0x11e] + 0xf0))((int *)DAT_00790808[0x11e],*PTR_DAT_007820b0);
  (**(code **)(*(int *)DAT_00790808[0x11f] + 0xf0))((int *)DAT_00790808[0x11f],*PTR_DAT_0078292c);
  (**(code **)(*(int *)DAT_00790808[0xfb] + 0xf0))((int *)DAT_00790808[0xfb],*PTR_DAT_00782270);
  (**(code **)(*(int *)DAT_00790808[0x113] + 0xf0))((int *)DAT_00790808[0x113],*PTR_DAT_007815a0);
  (**(code **)(*(int *)DAT_00790808[0xe8] + 0xf0))((int *)DAT_00790808[0xe8],*PTR_DAT_007823f8);
  (**(code **)(*(int *)DAT_00790808[0x102] + 0xf0))((int *)DAT_00790808[0x102],*PTR_DAT_00782810);
  (**(code **)(*(int *)DAT_00790808[0x10e] + 0xf0))((int *)DAT_00790808[0x10e],*PTR_DAT_00782414);
  uVar4 = (**(code **)(*(int *)DAT_00790808[0x10e] + 0xec))();
  FUN_004ee5c0(DAT_00790808[0x10f],uVar4);
  FUN_0048f164(DAT_00790808[0x110],*(undefined4 *)PTR_DAT_00781d3c);
  FUN_0048f164(DAT_00790808[0x111],*(undefined4 *)PTR_DAT_00782078);
  FUN_0048f164(DAT_00790808[0x112],*(undefined4 *)PTR_DAT_00781a8c);
  (**(code **)(*(int *)DAT_00790808[0x128] + 0xf0))((int *)DAT_00790808[0x128],0);
  if ((*PTR_DAT_00781ce0 & 1) != 0) {
    (**(code **)(*(int *)DAT_00790808[0x128] + 0xf0))((int *)DAT_00790808[0x128],1);
  }
  (**(code **)(*(int *)DAT_00790808[0x145] + 0xf0))((int *)DAT_00790808[0x145],0);
  if ((PTR_DAT_00781ce0[3] & 0x80) != 0) {
    (**(code **)(*(int *)DAT_00790808[0x145] + 0xf0))((int *)DAT_00790808[0x145],1);
  }
  (**(code **)(*(int *)DAT_00790808[0x141] + 0xf0))((int *)DAT_00790808[0x141],*PTR_DAT_00781b60);
  (**(code **)(*(int *)DAT_00790808[0x11d] + 0xf0))((int *)DAT_00790808[0x11d],*PTR_DAT_00782398);
  (**(code **)(*(int *)DAT_00790808[0x11c] + 0xf0))((int *)DAT_00790808[0x11c],*PTR_DAT_0078215c);
  (**(code **)(*(int *)DAT_00790808[0x11a] + 0xf0))((int *)DAT_00790808[0x11a],*PTR_DAT_007823bc);
  (**(code **)(*(int *)DAT_00790808[0x12d] + 0xf0))((int *)DAT_00790808[0x12d],*PTR_DAT_00781f98);
  (**(code **)(*(int *)DAT_00790808[0x11b] + 0xf0))((int *)DAT_00790808[0x11b],*PTR_DAT_007825e0);
  (**(code **)(*(int *)DAT_00790808[0x12f] + 0xf0))((int *)DAT_00790808[0x12f],*PTR_DAT_007822e8);
  FUN_0048f164(DAT_00790808[0x118],*(undefined4 *)PTR_DAT_0078196c);
  FUN_00530760(DAT_00790808[0x13a],*(undefined4 *)PTR_DAT_0078263c);
  FUN_00530760(DAT_00790808[0x13c],*(undefined4 *)PTR_DAT_007819f0);
  FUN_00530760(DAT_00790808[0x13e],*(undefined4 *)PTR_DAT_00781bb4);
  FUN_00530760(DAT_00790808[0x140],*(undefined4 *)PTR_DAT_007815dc);
  FUN_004ee6d8(DAT_00790808[0x132],*(undefined4 *)PTR_DAT_00781788);
  FUN_004ee6d8(DAT_00790808[0x133],*(undefined4 *)PTR_DAT_00782888);
  FUN_004ee6d8(DAT_00790808[0x134],*(undefined4 *)PTR_DAT_007816e4);
  FUN_004ee6d8(DAT_00790808[0x135],*(undefined4 *)PTR_DAT_0078291c);
  (**(code **)(*(int *)DAT_00790808[0xee] + 0xf0))((int *)DAT_00790808[0xee],*PTR_DAT_00782558);
  FUN_00407eb8(&DAT_00790810,0);
  (**(code **)(*(int *)DAT_00790808[0x114] + 0xf0))((int *)DAT_00790808[0x114],*PTR_DAT_00781c84);
  FUN_00530760(DAT_00790808[0x115],*(undefined4 *)PTR_DAT_00781b78);
  (**(code **)(*(int *)DAT_00790808[0xf6] + 0xf0))
            ((int *)DAT_00790808[0xf6],*(int *)PTR_DAT_00781800 == 0);
  (**(code **)(*(int *)DAT_00790808[0xf7] + 0xf0))
            ((int *)DAT_00790808[0xf7],*(int *)PTR_DAT_00781800 == 1);
  (**(code **)(*(int *)DAT_00790808[0xf8] + 0xf0))
            ((int *)DAT_00790808[0xf8],*(int *)PTR_DAT_00781800 == 2);
  uVar4 = (**(code **)(*(int *)DAT_00790808[0xf8] + 0xec))();
  FUN_004ee5c0(DAT_00790808[0xfa],uVar4);
  uVar4 = (**(code **)(*(int *)DAT_00790808[0xf8] + 0xec))();
  FUN_004ee5c0(DAT_00790808[0xf9],uVar4);
  FUN_00407eb8(&DAT_00790814,0);
  FUN_00407eb8(&DAT_00790818,0);
  (**(code **)(*(int *)DAT_00790808[0x117] + 0xf0))((int *)DAT_00790808[0x117],*PTR_DAT_0078220c);
  FUN_00530760(DAT_00790808[0xf0],*(undefined4 *)PTR_DAT_00781e7c);
  (**(code **)(**(int **)(DAT_00790808[0xf2] + 0x1b0) + 8))
            (*(int **)(DAT_00790808[0xf2] + 0x1b0),*(undefined4 *)PTR_DAT_00782444);
  (**(code **)(*(int *)DAT_00790808[0xff] + 0xf0))((int *)DAT_00790808[0xff],*PTR_DAT_0078248c);
  (**(code **)(*(int *)DAT_00790808[0xfe] + 0xf0))((int *)DAT_00790808[0xfe],*PTR_DAT_007821ac);
  (**(code **)(*(int *)DAT_00790808[0x100] + 0xf0))((int *)DAT_00790808[0x100],*PTR_DAT_00782708);
  (**(code **)(*(int *)DAT_00790808[0x101] + 0xf0))((int *)DAT_00790808[0x101],*PTR_DAT_00782554);
  (**(code **)(*(int *)DAT_00790808[0x144] + 0xf0))((int *)DAT_00790808[0x144],*PTR_DAT_00782484);
  FUN_004ee6d8(DAT_00790808[0x109],*(undefined4 *)PTR_DAT_00781678);
  FUN_004ee6d8(DAT_00790808[0x12e],*(undefined4 *)PTR_PTR_00781be0);
  local_30 = *(undefined1 **)PTR_DAT_007828e4;
  uStack_34 = 0x707f9e;
  FUN_0041a670(&local_8,0);
  FUN_004ee6d8(DAT_00790808[0x10a],local_8);
  FUN_004ee6d8(DAT_00790808[0x10b],*(undefined4 *)PTR_DAT_007823f4);
  iVar6 = (**(code **)(*DAT_00790808 + 0x110))();
  if (iVar6 == 1) {
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xe7] + 0xec))();
    *PTR_DAT_00782598 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[300] + 0xec))();
    *PTR_DAT_007820bc = uVar2;
    cVar3 = (**(code **)(*(int *)DAT_00790808[0x121] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)puVar1 = *(undefined4 *)(DAT_00790808[0x122] + 0x2a0);
    }
    cVar3 = (**(code **)(*(int *)DAT_00790808[0x123] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)puVar1 = 0xffffffff;
    }
    cVar3 = (**(code **)(*(int *)DAT_00790808[0x124] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    *(undefined4 *)PTR_DAT_00782508 =
         *(undefined4 *)(*(int *)(*(int *)(DAT_00790808[0x126] + 0x1b4) + 0x10) + 0x14);
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11e] + 0xec))();
    *PTR_DAT_007820b0 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11f] + 0xec))();
    *PTR_DAT_0078292c = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xfb] + 0xec))();
    *PTR_DAT_00782270 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x113] + 0xec))();
    *PTR_DAT_007815a0 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xe8] + 0xec))();
    *PTR_DAT_007823f8 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x102] + 0xec))();
    *PTR_DAT_00782810 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x10e] + 0xec))();
    *PTR_DAT_00782414 = uVar2;
    *(undefined4 *)PTR_DAT_00781d3c = *(undefined4 *)(DAT_00790808[0x110] + 0x280);
    *(undefined4 *)PTR_DAT_00782078 = *(undefined4 *)(DAT_00790808[0x111] + 0x280);
    *(undefined4 *)PTR_DAT_00781a8c = *(undefined4 *)(DAT_00790808[0x112] + 0x280);
    *(uint *)PTR_DAT_00781ce0 = *(uint *)PTR_DAT_00781ce0 & 0xfffffffe;
    cVar3 = (**(code **)(*(int *)DAT_00790808[0x128] + 0xec))();
    if (cVar3 != '\0') {
      *(uint *)PTR_DAT_00781ce0 = *(uint *)PTR_DAT_00781ce0 | 1;
    }
    *(uint *)PTR_DAT_00781ce0 = *(uint *)PTR_DAT_00781ce0 & 0x7fffffff;
    cVar3 = (**(code **)(*(int *)DAT_00790808[0x145] + 0xec))();
    if (cVar3 != '\0') {
      *(uint *)PTR_DAT_00781ce0 = *(uint *)PTR_DAT_00781ce0 | 0x80000000;
    }
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x141] + 0xec))();
    *PTR_DAT_00781b60 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11d] + 0xec))();
    *PTR_DAT_00782398 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11c] + 0xec))();
    *PTR_DAT_0078215c = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11a] + 0xec))();
    *PTR_DAT_007823bc = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x12d] + 0xec))();
    *PTR_DAT_00781f98 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x11b] + 0xec))();
    *PTR_DAT_007825e0 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x12f] + 0xec))();
    *PTR_DAT_007822e8 = uVar2;
    *(undefined4 *)PTR_DAT_0078196c = *(undefined4 *)(DAT_00790808[0x118] + 0x280);
    *(undefined4 *)PTR_DAT_0078263c = *(undefined4 *)(DAT_00790808[0x13a] + 0x2a0);
    *(undefined4 *)PTR_DAT_007819f0 = *(undefined4 *)(DAT_00790808[0x13c] + 0x2a0);
    *(undefined4 *)PTR_DAT_00781bb4 = *(undefined4 *)(DAT_00790808[0x13e] + 0x2a0);
    *(undefined4 *)PTR_DAT_007815dc = *(undefined4 *)(DAT_00790808[0x140] + 0x2a0);
    FUN_004ee6a0(DAT_00790808[0x132],&stack0xffffffe8);
    FUN_00407eb8(PTR_DAT_00781788,unaff_ESI);
    FUN_004ee6a0(DAT_00790808[0x133],&stack0xffffffe4);
    FUN_00407eb8(PTR_DAT_00782888,unaff_EDI);
    FUN_004ee6a0(DAT_00790808[0x134],&local_20);
    FUN_00407eb8(PTR_DAT_007816e4,local_20);
    FUN_004ee6a0(DAT_00790808[0x135],&local_24);
    FUN_00407eb8(PTR_DAT_0078291c,local_24);
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xee] + 0xec))();
    *PTR_DAT_00782558 = uVar2;
    if ((*PTR_DAT_00782558 != '\0') && (DAT_00790810 != 0)) {
      iVar6 = FUN_0045f540(&PTR_LAB_00457450,1);
      local_30 = &LAB_0070847f;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      FUN_0045f758(iVar6,DAT_00790810);
      uVar4 = FUN_00462144(&PTR_FUN_004587d4,1);
      *(undefined4 *)PTR_DAT_007820a0 = uVar4;
      FUN_00463dc0(*(undefined4 *)PTR_DAT_007820a0,6);
      uVar4 = FUN_0045fde4(iVar6);
      (**(code **)(**(int **)PTR_DAT_007820a0 + 0x44))(*(int **)PTR_DAT_007820a0,uVar4);
      uVar4 = FUN_0045fdfc(iVar6);
      (**(code **)(**(int **)PTR_DAT_007820a0 + 0x38))(*(int **)PTR_DAT_007820a0,uVar4);
      uVar4 = *(undefined4 *)(iVar6 + 0xc);
      piVar5 = (int *)FUN_00462a64(*(undefined4 *)PTR_DAT_007820a0);
      (**(code **)(*piVar5 + 0x3c))(piVar5,0,0,uVar4);
      *in_FS_OFFSET = uStack_34;
      FUN_00405a7c(iVar6,uStack_34,puVar7);
    }
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x114] + 0xec))();
    *PTR_DAT_00781c84 = uVar2;
    *(undefined4 *)PTR_DAT_00781b78 = *(undefined4 *)(DAT_00790808[0x115] + 0x2a0);
    cVar3 = (**(code **)(*(int *)DAT_00790808[0xf6] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)PTR_DAT_00781800 = 0;
    }
    cVar3 = (**(code **)(*(int *)DAT_00790808[0xf7] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)PTR_DAT_00781800 = 1;
    }
    cVar3 = (**(code **)(*(int *)DAT_00790808[0xf8] + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)PTR_DAT_00781800 = 2;
    }
    if (*(int *)PTR_DAT_00781800 == 2) {
      if (DAT_00790818 != 0) {
        if (*(int *)PTR_DAT_007816d8 != 0) {
          FUN_00405a7c(*(undefined4 *)PTR_DAT_007816d8);
        }
        *(undefined4 *)PTR_DAT_007816d8 = 0;
        iVar6 = FUN_0045f540(&PTR_LAB_00457450,1);
        local_30 = &LAB_00708620;
        uStack_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_34;
        FUN_0045f758(iVar6,DAT_00790818);
        if (*(int *)PTR_DAT_007816d8 != 0) {
          FUN_00405a7c(*(undefined4 *)PTR_DAT_007816d8);
        }
        uVar4 = FUN_00462144(&PTR_FUN_004587d4,1);
        *(undefined4 *)PTR_DAT_007816d8 = uVar4;
        FUN_00463dc0(*(undefined4 *)PTR_DAT_007816d8,6);
        uVar4 = FUN_0045fde4(iVar6);
        (**(code **)(**(int **)PTR_DAT_007816d8 + 0x44))(*(int **)PTR_DAT_007816d8,uVar4);
        uVar4 = FUN_0045fdfc(iVar6);
        (**(code **)(**(int **)PTR_DAT_007816d8 + 0x38))(*(int **)PTR_DAT_007816d8,uVar4);
        uVar4 = *(undefined4 *)(iVar6 + 0xc);
        piVar5 = (int *)FUN_00462a64(*(undefined4 *)PTR_DAT_007816d8);
        (**(code **)(*piVar5 + 0x3c))(piVar5,0,0,uVar4);
        *in_FS_OFFSET = uStack_34;
        FUN_00405a7c(iVar6,uStack_34,puVar8);
      }
      if (DAT_00790814 != 0) {
        if (*(int *)PTR_DAT_00781a48 != 0) {
          FUN_00405a7c(*(undefined4 *)PTR_DAT_00781a48);
        }
        *(undefined4 *)PTR_DAT_00781a48 = 0;
        iVar6 = FUN_0045f540(&PTR_LAB_00457450,1);
        local_30 = &LAB_00708713;
        uStack_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_34;
        FUN_0045f758(iVar6,DAT_00790814);
        if (*(int *)PTR_DAT_00781a48 != 0) {
          FUN_00405a7c(*(undefined4 *)PTR_DAT_00781a48);
        }
        uVar4 = FUN_00462144(&PTR_FUN_004587d4,1);
        *(undefined4 *)PTR_DAT_00781a48 = uVar4;
        FUN_00463dc0(*(undefined4 *)PTR_DAT_00781a48,6);
        uVar4 = FUN_0045fde4(iVar6);
        (**(code **)(**(int **)PTR_DAT_00781a48 + 0x44))(*(int **)PTR_DAT_00781a48,uVar4);
        uVar4 = FUN_0045fdfc(iVar6);
        (**(code **)(**(int **)PTR_DAT_00781a48 + 0x38))(*(int **)PTR_DAT_00781a48,uVar4);
        uVar4 = *(undefined4 *)(iVar6 + 0xc);
        piVar5 = (int *)FUN_00462a64(*(undefined4 *)PTR_DAT_00781a48);
        (**(code **)(*piVar5 + 0x3c))(piVar5,0,0,uVar4);
        *in_FS_OFFSET = uStack_34;
        FUN_00405a7c(iVar6,uStack_34,puVar9);
      }
    }
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x117] + 0xec))();
    *PTR_DAT_0078220c = uVar2;
    if (*(int *)(DAT_00790808[0xf0] + 0x2a0) != *(int *)PTR_DAT_00781e7c) {
      *(int *)PTR_DAT_00781e7c = *(int *)(DAT_00790808[0xf0] + 0x2a0);
      local_30 = (undefined1 *)0x70876e;
      CoCreateGuid((GUID *)PTR_DAT_007826ac);
    }
    uVar4 = FUN_0045f664(*(undefined4 *)(DAT_00790808[0xf2] + 0x1b0));
    (**(code **)(**(int **)PTR_DAT_00782444 + 8))(*(int **)PTR_DAT_00782444,uVar4);
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xff] + 0xec))();
    *PTR_DAT_0078248c = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0xfe] + 0xec))();
    *PTR_DAT_007821ac = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x100] + 0xec))();
    *PTR_DAT_00782708 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x101] + 0xec))();
    *PTR_DAT_00782554 = uVar2;
    uVar2 = (**(code **)(*(int *)DAT_00790808[0x144] + 0xec))();
    *PTR_DAT_00782484 = uVar2;
    FUN_004ee6a0(DAT_00790808[0x109],&local_28);
    FUN_00407eb8(PTR_DAT_00781678,local_28);
    uVar4 = 0x70884c;
    FUN_004ee6a0(DAT_00790808[0x12e],&stack0xffffffd4);
    FUN_00407eb8(PTR_PTR_00781be0,uVar4);
    FUN_004ee6a0(DAT_00790808[0x10b],&local_30);
    FUN_00407eb8(PTR_DAT_007823f4,local_30);
    FUN_00709da0();
  }
  puVar7 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_007088a8;
  local_24 = (undefined1 *)0x708898;
  thunk_FUN_00406e80(&local_30,7,puVar7);
  local_24 = (undefined1 *)0x7088a0;
  thunk_FUN_00406e5c(&local_8);
  return;
}
